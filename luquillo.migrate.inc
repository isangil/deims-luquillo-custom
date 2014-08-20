<?php
/**
 * @file
 * Migrate module integration for the Luquillo module.
 */
/**
 * Implements hook_migrate_api().
 */
function luquillo_migrate_api() {
  $info = array(
     'api' => 2,
     'migrations' => array(
       'LuquilloContentBlog' => array(
         'class_name' => 'LuquilloContentBlogMigration',
       ),
       'LuquilloContentSlide' => array(
         'class_name' => 'LuquilloContentSlideMigration',
       ),
       'LuquilloContentInstitution' => array(
         'class_name' => 'LuquilloContentInstitutionMigration',
       ),
       'LuquilloTaxonomyDataSetsVocabularyV' => array(
         'class_name' => 'DrupalTerm6Migration',
         'description' => "Taxonomy migration for the 'Data Sets Vocabulary V' vocabulary.",
         'source_connection' => 'drupal6',
         'source_version' => 6,
         // @todo Make this vocabulary source ID automatic from the D6 database.
         'source_vocabulary' => '5',
         'destination_vocabulary' => 'data_sets_vocabulary_v',
       ),
       'LuquilloTaxonomLuqLter2006Classification' => array(
         'class_name' => 'DrupalTerm6Migration',
         'description' => "Taxonomy migration for the 'Luq Lter 2006 Classification' vocabulary.",
         'source_connection' => 'drupal6',
         'source_version' => 6,
         // @todo Make this vocabulary source ID automatic from the D6 database.
         'source_vocabulary' => '9',
         'destination_vocabulary' => 'luq_lter_2006_classification',
       ),
       'LuquilloTaxonomyOnTable4Vocab' => array(
         'class_name' => 'DrupalTerm6Migration',
         'description' => "Taxonomy migration for the 'On Table 4 Vocab' vocabulary.",
         'source_connection' => 'drupal6',
         'source_version' => 6,
         // @todo Make this vocabulary source ID automatic from the D6 database.
         'source_vocabulary' => '10',
         'destination_vocabulary' => 'on_table_4_vocab',
       ),
       'LuquilloTaxonomyProgram' => array(
         'class_name' => 'DrupalTerm6Migration',
         'description' => "Taxonomy migration for the 'Program' vocabulary.",
         'source_connection' => 'drupal6',
         'source_version' => 6,
         // @todo Make this vocabulary source ID automatic from the D6 database.
         'source_vocabulary' => '15',
         'destination_vocabulary' => 'program',
       ),
     ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = DEIMS_D6_MIGRATION_GROUP;
  }
  return $info;
}

/**
 * Implements hook_deims_migration_overrides().
 */
function luquillo_deims_migration_overrides() {
    return array(
        'DeimsContentOrganization' => array('class_name' => 'LuquilloContentOrganizationMigration'),
        'DeimsContentDataFile' => array('class_name' => 'LuquilloContentDataFileMigration'),
        'DeimsContentDataSet' => array('class_name' => 'LuquilloContentDataSetMigration'),
        'DeimsContentPerson' => array('class_name' => 'LuquilloContentPersonMigration'),
        'DeimsContentResearchSite' => array('class_name' => 'LuquilloContentResearchSiteMigration'),
        'DeimsContentResearchProject' => array('class_name' => 'LuquilloContentResearchProjectMigration'),
        'DeimsContentStory' => array('class_name' => 'LuquilloContentStoryMigration'),
    );
}
