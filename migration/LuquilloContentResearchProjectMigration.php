<?php

/**
 * @file
 * Definition of LuquilloContentResearchProjectMigration.
 */

class LuquilloContentResearchProjectMigration extends DeimsContentResearchProjectMigration {
  public function __construct(array $arguments) {
     parent::__construct($arguments);

     $this->addUnmigratedSources(array(
       'field_project_description:format',
       'field_research_project_funding:format',
       'upload',
       'upload:description',
       'upload:list',
       'upload:weight',
       '11',
       '12',
       'field_project_image_data',
       'revision',
       'revision_uid',
       'log',
     ));

     $this->addUnmigratedDestinations(array(
       'field_funding_source:language',
       'field_funding_source:summary',
       'field_funding_source:format',
       'field_reds_searcher_keywords:create_term', 
       'field_reds_searcher_keywords:ignore_case',
       'field_dataset_program:create_term', 
       'field_dataset_program:ignore_case',
       'field_project_type', 
       'field_project_type:source_type',
       'field_project_type:create_term', 
       'field_project_type:ignore_case',
       'field_keywords:create_term', 
       'field_keywords:ignore_case',
       'field_core_areas:create_term', 
       'field_core_areas:ignore_case',
       'field_rp_2006prop_table4_termref:create_term', 
       'field_rp_2006prop_table4_termref:ignore_case',
       'field_rp_lter2006_classificati:create_term',
       'field_rp_lter2006_classificati:ignore_case',
     ));

//   the photos use a different field

     $this->addFieldMapping('field_images','field_project_image')
       ->sourceMigration('DeimsFile');
     $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
     $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

     // There are 7 vocabularies used here. 
     //  5 dataset vocab v.2
     $this->addFieldMapping('field_reds_searcher_keywords', '5')
       ->sourceMigration('LuquilloTaxonomyDataSetsVocabularyV');
     $this->addFieldMapping('field_reds_searcher_keywords:source_type')
       ->defaultValue('tid');

     //  6 lter core areas
     $this->addFieldMapping('field_core_areas', '6')
       ->sourceMigration('DeimsTaxonomyCoreAreas');
     $this->addFieldMapping('field_core_areas:source_type')
       ->defaultValue('tid');
  
     //  8 lter controlled
     $this->addFieldMapping('field_keywords', '8')
       ->sourceMigration('DeimsTaxonomyLTERControlled');
     $this->addFieldMapping('field_keywords:source_type')
       ->defaultValue('tid');

     //  9 luq-lter-2006-class
     $this->addFieldMapping('field_rp_lter2006_classificati', '9')
       ->sourceMigration('LuquilloTaxonomLuqLter2006Classification');
     $this->addFieldMapping('field_rp_lter2006_classificati:source_type')
       ->defaultValue('tid');

     //  10 on table 4 vocab
     $this->addFieldMapping('field_rp_2006prop_table4_termref', '15')
       ->sourceMigration('LuquilloTaxonomyOnTable4Vocab');
     $this->addFieldMapping('field_rp_2006prop_table4_termref:source_type')
       ->defaultValue('tid');

     //  11 tags DNM
     //  12 lter five core area codes  DNM

     //  15 program
     $this->addFieldMapping('field_dataset_program', '8')
       ->sourceMigration('LuquilloTaxonomyProgram');
     $this->addFieldMapping('field_dataset_program:source_type')
       ->defaultValue('tid');
      
     // Funding
     $this->addFieldMapping('field_funding_source','field_research_project_funding');

     // sometimes this "title" differs from node title - but do we need this?
     // field_project_title	Project Title  --> to node title?

     $this->addFieldMapping('field_luq_rp_research_categories','field_research_project_category');

     // perhaps try it in prepare...
     // field_project_program	Research Program  -- OK, is this now a taxonomy???

     // References to other content types. unsure about these.
     // Luq2 is breaking down fast -- cannot add this field to source.
     //$this->addFieldMapping('','field_research_project_sites')
     // ->sourceMigration('DeimsContentResearchSite');

     $this->addFieldMapping('field_related_data_sets','field_research_project_data')
      ->sourceMigration('DeimsContentDataSet');

     $this->addFieldMapping('field_project_scientist','field_research_project_invest')
      ->sourceMigration('DeimsContentPerson');
    
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
