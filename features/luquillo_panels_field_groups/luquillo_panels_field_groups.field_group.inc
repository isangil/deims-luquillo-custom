<?php
/**
 * @file
 * luquillo_panels_field_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function luquillo_panels_field_groups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|data_set|datasetspanels';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-categories field-group-fieldset',
      ),
    ),
  );
  $export['group_categories|node|data_set|datasetspanels'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|data_set|datasetspanels';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-dates field-group-fieldset',
      ),
    ),
  );
  $export['group_dates|node|data_set|datasetspanels'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_downloads|node|data_set|datasetspanels';
  $field_group->group_name = 'group_downloads';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Downloads',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-downloads field-group-fieldset ',
      ),
    ),
  );
  $export['group_downloads|node|data_set|datasetspanels'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methodology|node|data_set|datasetspanels';
  $field_group->group_name = 'group_methodology';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Methodology',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-methodology field-group-fieldset',
      ),
    ),
  );
  $export['group_methodology|node|data_set|datasetspanels'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|data_set|datasetspanels';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-people field-group-fieldset',
      ),
    ),
  );
  $export['group_people|node|data_set|datasetspanels'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|data_set|datasetspanels';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-related field-group-fieldset',
      ),
    ),
  );
  $export['group_related|node|data_set|datasetspanels'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary|node|data_set|datasetspanels';
  $field_group->group_name = 'group_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_set';
  $field_group->mode = 'datasetspanels';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Summary',
      'instance_settings' => array(
        'classes' => ' group-summary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_summary|node|data_set|datasetspanels'] = $field_group;

  return $export;
}
