<?php

/**
 * @file
 * Definition of LuquilloContentPersonMigration.
 */

class LuquilloContentPersonMigration extends DeimsContentPersonMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // field_person_pubs does not exist
    $this->removeFieldMapping(NULL, 'field_person_pubs');

    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_images:source_dir',
      'field_images:urlencode',
      'field_images:alt',
      'field_images:title',
    ));

    $this->addUnmigratedSources(array(
      'field_person_organization:title',
      'field_person_organization:attributes',
      'field_person_zipcode_final',
      'field_person_ltercorearea_code',	     // IGNORE (59) deprecated vocabulary
      'field_person_luqvresearcher_numb',    // IGNORE (17) deprecated vocabulary
      'field_person_luqvhypothesis_numb',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
    ));
  
    $this->addFieldMapping('field_url','field_person_url');
    $this->addFieldMapping('field_url:title','field_person_url:title');
    $this->addFieldMapping('field_url:attributes','field_person_url:attributes');

    //these two may not work.  re-register field (was unmmi) and picklist.
    $this->addFieldMapping('field_name:given','field_person_first_name');
    $this->addFieldMapping('field_name:generational','field_person_sufix');

    $this->addFieldMapping('field_images', 'field_persons_image')
      ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

    $this->addFieldMapping('field_person_discipline','field_person_discipline');
    $this->addFieldMapping('field_person_status','field_person_status')
     ->description('Tinker in prepareRow()');
    $this->addFieldMapping('field_person_itespersonnel','field_person_itespersonnel')  
     ->description('Tinker in prepareRow, Yes/No to Boolean');
    $this->addFieldMapping('field_person_student','field_person_student')   
     ->description('Tinker in prepareRow, Yes to Boolean');

    $this->addFieldMapping('field_person_coreareas_termref','field_person_corearea')
      ->sourceMigration('DeimsTaxonomyCoreAreas');
    $this->addFieldMapping('field_person_coreareas_termref:source_type')
      ->defaultValue('tid');

    // Integer for -view order- Luq 5 Researcher number (28 nodes)
    $this->addFieldMapping('field_person_luq5researcher','field_person_luq5researche');

/**
   //name related (suffix)
   field_person_prefix
   field_person_sufix	

   field_gradstudform_advisor_ref	// node ref to SELF  ?tough?

   // Do not migrate .. why are these vocabs here, anyhow?
   12	LTER five corea areas codes
   13	LUQ V Hypothesis number
   14	LUQ V Researcher number
**/
  }

  public function prepareRow($row) {

   // fix that zip code...
    
    if(strlen($row->field_person_zipcode)==3){
      $row->field_person_zipcode='00'.$row->field_person_zipcode;
    }
    switch ($row->field_person_status) {
      case 'Active':
        $row->field_person_status = 1;
        break;
      default:
        $row->field_person_status = 0;
        break;
    }

    switch ($row->field_person_itespersonnel) {
      case 'Yes':
        $row->field_person_itespersonnel = 1;
        break;
      case 'No':
        $row->field_person_itespersonnel = 0;
        break;
    }

    switch ($row->field_person_student) {
      case 'Yes':
        $row->field_person_student = 1;
        break;
      case 'No':
        $row->field_person_student = 0;
        break;
    }

    // Fix empty email values used on SEV.
    switch ($row->field_person_email) {
      case 'unknown@ites.upr.edu':
      case 'none@ites.upr.edu':
        $row->field_person_email = NULL;
    }

    // Fix country values used on SEV.
    switch ($row->field_person_country) {
      case 'Dublin':
        $row->field_person_city = 'Dublin';
        $row->field_person_country = 'Ireland';
        break;
      case 'Cumbria':
        $row->field_person_state = 'Cumbria';
        $row->field_person_country = 'United Kingdom';
        break;
    }

    parent::prepareRow($row);
  }

  public function getOrganization($node, $row) {
    $field_values = array();

    // Search for an already migrated organization entity with the same title
    // and link value.
    if (!empty($row->{'field_person_organization:title'})) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node');
      $query->entityCondition('bundle', 'organization');
      $query->propertyCondition('title', $row->{'field_person_organization:title'});
      $results = $query->execute();
      if (!empty($results['node'])) {
        $field_values[] = array('target_id' => reset($results['node'])->nid);
      }
    }

    return $field_values;
  }
}
