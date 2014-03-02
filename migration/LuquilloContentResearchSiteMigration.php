<?php

/**
 * @file
 * Definition of LuquilloContentResearchSiteMigration.
 */

class LuquilloContentResearchSiteMigration extends DeimsContentResearchSiteMigration {
  public function __construct(array $arguments) {
     parent::__construct($arguments);

     $this->addUnmigratedSources(array(
       field_research_site_locationcck,
       field_site_image,
     ));
//   the photos use a different field
     $this->removeFieldMapping('field_images');
     $this->addFieldMapping('field_images','field_research_site_image')
       ->sourceMigration('DeimsFile');

     // VOcabulary Program reference, to a featurized new field
     $this->addFieldMapping('field_res_site_program_ter', 'field_researchsite_program')
       ->sourceMigration('LuquilloTaxonomyProgram');
      
     // Datum is a overly used field, migrated to a newly featurized field.
     $this->addFieldMapping('field_res_site_datum','field_research_site_datum');

     // We have up to three alternative titles!
     $this->addFieldMapping('field_res_site_title','field_site_title');
     $this->addFieldMapping('field_res_site_official_title','field_official_site_title');
     $this->addFieldMapping('field_res_site_other_title','field_other_site_title');
  
     // flag for area -- in preparerow
     $this->addFieldMapping('field_res_site_isareaflag','field_research_site_isareaflag')
      ->description('tweak in prepareRow.');

     // area
     $this->addFieldMapping('field_res_site_area','field_research_site_area');

     // References to other content types. unsure about these.
     $this->addFieldMapping('field_res_site_datasource_ref','field_site_datafile_refr')
      ->sourceMigration('DeimsDataFile');
     $this->addFieldMapping('field_res_site_dataset_ref','field_site_dataset_reference')
      ->sourceMigration('DeimsDataSet');
    
  }
  public function prepareRow($row) {
    parent::prepareRow($row);

    switch ($row->field_research_site_isareaflag) {
      case 'TRUE':
        $row->field_research_site_isareaflag = 1;
        break;
      case 'FALSE':
        $row->field_research_site_isareaflag = 0;
        break;
      default:
        $row->field_research_site_isareaflag = 0;
    }
  }
}
