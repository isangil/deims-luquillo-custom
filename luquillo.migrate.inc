<?php
/**
 * @file
 * Migrate module integration for the Luquillo module.
 */
/**
 * Implements hook_migrate_api().
 */
function luquillo_migrate_api() {
    return array(
        'api' => 2,
        'migrations' => array(
            'LuquilloTaxonomyDataSetsVocabularyV' => array(
                'class_name' => 'DrupalTerm6Migration',
                'description' => "Taxonomy migration for the 'Data Sets Vocabulary V' vocabulary.",
                'source_connection' => 'drupal6',
                'source_version' => 6,
                // @todo Make this vocabulary source ID automatic from the D6 database.
                'source_vocabulary' => '5',
                'destination_vocabulary' => 'datasets_vocabulary_v',
                'group' => DEIMS_D6_MIGRATION_GROUP,
            ),
            'LuquilloTaxonomLuqLter2006Classification' => array(
                'class_name' => 'DrupalTerm6Migration',
                'description' => "Taxonomy migration for the 'Luq Lter 2006 Classification' vocabulary.",
                'source_connection' => 'drupal6',
                'source_version' => 6,
                // @todo Make this vocabulary source ID automatic from the D6 database.
                'source_vocabulary' => '9',
                'destination_vocabulary' => 'luq_lter_2006_classification',
                'group' => DEIMS_D6_MIGRATION_GROUP,
            ),
            'LuquilloTaxonomyOnTable4Vocab' => array(
                'class_name' => 'DrupalTerm6Migration',
                'description' => "Taxonomy migration for the 'On Table 4 Vocab' vocabulary.",
                'source_connection' => 'drupal6',
                'source_version' => 6,
                // @todo Make this vocabulary source ID automatic from the D6 database.
                'source_vocabulary' => '10',
                'destination_vocabulary' => 'on_table_4_vocab',
                'group' => DEIMS_D6_MIGRATION_GROUP,
            ),
            'LuquilloTaxonomyProgram' => array(
                'class_name' => 'DrupalTerm6Migration',
                'description' => "Taxonomy migration for the 'Program' vocabulary.",
                'source_connection' => 'drupal6',
                'source_version' => 6,
                // @todo Make this vocabulary source ID automatic from the D6 database.
                'source_vocabulary' => '15',
                'destination_vocabulary' => 'program',
                'group' => DEIMS_D6_MIGRATION_GROUP,
            ),
        ),
    );
}
/**
 * Implements hook_deims_migration_overrides().
 */
function luquillo_deims_migration_overrides() {
    return array(
//        'DeimsContentDataSet' => array('class_name' => 'LuquilloContentDataSetMigration'),
//        'DeimsContentPerson' => array('class_name' => 'LuquilloContentPersonMigration'),
        'DeimsContentOrganization' => array('class_name' => 'LuquilloContentOrganizationMigration'),
    );
}
