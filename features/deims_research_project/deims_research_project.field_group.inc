<?php
/**
 * @file
 * deims_research_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function deims_research_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|project|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '44',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_staff|node|project|form';
  $field_group->group_name = 'group_project_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Research Project Staff',
    'weight' => '47',
    'children' => array(
      0 => 'field_project_contact',
      1 => 'field_project_manager',
      2 => 'field_project_director',
      3 => 'field_project_scientist',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-project-staff field-group-htabs',
      ),
    ),
  );
  $export['group_project_staff|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|project|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Related Information',
    'weight' => '46',
    'children' => array(
      0 => 'field_related_links',
      1 => 'field_related_data_sets',
      2 => 'field_luq_rp_research_categories',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-htab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|project|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'group_media',
      1 => 'group_related',
      2 => 'group_taxonomy',
      3 => 'group_project_staff',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs ',
      ),
    ),
  );
  $export['group_tabs|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|project|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '45',
    'children' => array(
      0 => 'field_core_areas',
      1 => 'field_keywords',
      2 => 'field_dataset_program',
      3 => 'field_project_type',
      4 => 'field_reds_searcher_keywords',
      5 => 'field_rp_2006prop_table4_termref',
      6 => 'field_rp_lter2006_classificati',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-taxonomy field-group-htab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|project|form'] = $field_group;

  return $export;
}
