<?php
/**
 * @file
 * deims_data_set.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function deims_data_set_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_data_set';
  $strongarm->value = 0;
  $export['autosave_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__data_set';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'eml' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'eml_hl' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'bdp' => array(
        'custom_settings' => TRUE,
      ),
      'iso' => array(
        'custom_settings' => FALSE,
      ),
      'article_key_finding_list' => array(
        'custom_settings' => FALSE,
      ),
      'main_menu_item_page' => array(
        'custom_settings' => FALSE,
      ),
      'datasetspanels' => array(
        'custom_settings' => TRUE,
      ),
      'map' => array(
        'custom_settings' => FALSE,
      ),
      'data_source' => array(
        'custom_settings' => FALSE,
      ),
      'variablelist' => array(
        'custom_settings' => FALSE,
      ),
      'data_source_list' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_data_set';
  $strongarm->value = array();
  $export['menu_options_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_data_set';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_data_set';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_data_set';
  $strongarm->value = '1';
  $export['node_preview_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_data_set';
  $strongarm->value = 0;
  $export['node_submitted_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_data_set_pattern';
  $strongarm->value = '';
  $export['pathauto_node_data_set_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_data_set';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_data_set';
  $strongarm->value = 0;
  $export['workbench_access_node_type_data_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_data_set';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_data_set'] = $strongarm;

  return $export;
}
