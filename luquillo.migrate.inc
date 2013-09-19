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
            'LuquilloTaxonomyCategories' => array(
                'class_name' => 'DrupalTerm6Migration',
                'description' => "Taxonomy migration for the 'Categories' vocabulary.",
                'source_connection' => 'drupal6',
                'source_version' => 6,
                // @todo Make this vocabulary source ID automatic from the D6 database.
                'source_vocabulary' => '5',
                'destination_vocabulary' => 'categories',
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
