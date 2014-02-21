<?php

/**
 * @file
 * Definition of LuquilloContentDataSetMigration.
 * 
 * note - the vocabulary migration for core areas and
 * LTER controlled need to be assigned the right VIDs
 * at the core migration file (deims.migrate.inc).
 *
 */

class LuquilloContentDataSetMigration extends DeimsContentDataSetMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // The 'Luquillo LTER Information Manager' (Eda) is node 6598 in the Drupal 6
    // database. Add this as the default person to the metadata provider, and
    // publisher fields.

    $this->addUnmigratedSources(array(
      'field_dataset_station_acronym',
      'field_dataset_biblio_ref',
      'field_dataset_tags',
      'field_dataset_duration',
      'field_dataset_datafile_referrer',
      'field_dataset_project',
      'field_dataset_title',
      'upload',
      'upload:list',
    ));

    $this->removeFieldMapping('field_person_metadata_provider');
    $this->removeFieldMapping('field_related_links');
    $this->removeFieldMapping('field_related_links:title');
    $this->removeFieldMapping('field_related_links:attributes');
    $this->removeFieldMapping('field_person_publisher');

    $this->addUnmigratedDestinations(array(
      'field_person_publisher',
      'field_person_metadata_provider',
      'field_related_links',
      'field_related_links:title',
      'field_related_links:attributes',
    ));

//  pubdate has a different field name, ironically same name.
    $this->removeFieldMapping('field_publication_date');
    $this->addFieldMapping('field_publication_date', 'field_publication_date');

//  methods, different field name
    $this->removeFieldMapping('field_methods');
    $this->addFieldMapping('field_methods', 'field_dataset_methods');
    $this->removeFieldMapping('field_methods:format');
    $this->addFieldMapping('field_methods:format', 'field_dataset_methods:format')
      ->callbacks(array($this, 'mapFormat'));

//  it is field_dataset_instrument for Luq DEIMS
    $this->removeFieldMapping('field_instrumentation');
    $this->addFieldMapping('field_instrumentation', 'field_dataset_instrument');
    $this->removeFieldMapping('field_instrumentation:format');
    $this->addFieldMapping('field_instrumentation:format', 'field_dataset_instrument:format')
      ->callbacks(array($this, 'mapFormat'));

//  quality also different name
    $this->removeFieldMapping('field_quality_assurance');
    $this->addFieldMapping('field_quality_assurance', 'field_dataset_quality');
    $this->removeFieldMapping('field_quality_assurance:format');
    $this->addFieldMapping('field_quality_assurance:format', 'field_dataset_quality:format')
      ->callbacks(array($this, 'mapFormat'));

//  metadata provider field name is actually different
    $this->removeFieldMapping('field_person_metadata_provider');
    $this->addFieldMapping('field_person_metadata_provider','field_dataset_metadataentryperso')
      ->sourceMigration('DeimsContentPerson');

//  we dont have a publisher.. or a person-lter.
/**    $this->addFieldMapping('field_person_publisher')
      ->sourceMigration('DeimsContentPerson')
      ->defaultValue(1048);
**/

//  Term Refrences, Vocabularies
//  LTER Core Areas (vid=6)
    $this->addFieldMapping('field_core_areas', 'field_dataset_corearea_keyword')
      ->sourceMigration('DeimsTaxonomyCoreAreas');
    $this->addFieldMapping('field_core_areas:source_type')
      ->defaultValue('tid');

//  LTER 2006 Proposal Classification via term ref (vid=9)  
    $this->addFieldMapping('field_dataset_2006class', 'field_dataset_table4class')
      ->sourceMigration('LuquilloTaxonomLuqLter2006Classification');
    $this->addFieldMapping('field_dataset_2006class:source_type')
      ->defaultValue('tid');

//  In source, there is a "field_dataset_realtable4class" and "field_dataset_table4class"  
//  but the field "realtable4class" refers to the Table4Class taxonomy 
    $this->addFieldMapping('field_dataset_table4class', 'field_dataset_realtable4class')
      ->sourceMigration('LuquilloTaxonomyOnTable4Vocab');
    $this->addFieldMapping('field_dataset_table4class:source_type')
      ->defaultValue('tid');

//  Program keywords (aka Program vocab) via term reference. (vid=)
    $this->addFieldMapping('field_dataset_program', 'field_dataset_program')
      ->sourceMigration('LuquilloTaxonomyProgram');
    $this->addFieldMapping('field_dataset_program:source_type')
      ->defaultValue('tid');

//  Researchers keywords (aka Data Sets Vocabulary V.2, aka Luq V Hyp) via term reference. (vid=5)
    $this->addFieldMapping('field_reds_searcher_keywords', 'field_dataset_keywords')
      ->sourceMigration('LuquilloTaxonomyDataSetsVocabularyV');
    $this->addFieldMapping('field_reds_searcher_keywords:source_type')
      ->defaultValue('tid');

//  LTER controlled via D6 term reference  (vid=8)
    $this->addFieldMapping('field_keywords', 'field_dataset_lterkey')
      ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    if (empty($row->field_dataset_id_value) && !empty($row->field_dataset_sevid_value)) {
      $row->field_dataset_id_value = $row->field_dataset_sevid_value;
    }
  }
}
