<?php
/**
 * @file
 * deims_data_set.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function deims_data_set_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|data_set|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'data_set';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'field_additional_information' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_date_range' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|data_set|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|data_set|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'data_set';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_date_range' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|data_set|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_data_set_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|data_set|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'data_set';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-twocol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'group_summary',
        1 => 'field_abstract',
        2 => 'field_person_publisher',
        3 => 'field_additional_information',
        4 => 'group_dates',
        5 => 'field_short_name',
        6 => 'group_people',
        7 => 'field_data_set_id',
        8 => 'group_methodology',
        9 => 'field_purpose',
        11 => 'field_methods',
        15 => 'field_instrumentation',
        16 => 'field_maintenance',
        20 => 'field_quality_assurance',
        22 => 'field_person_creator',
        23 => 'field_person_contact',
        26 => 'field_project_roles',
        27 => 'field_date_range',
        29 => 'field_publication_date',
      ),
      'right' => array(
        10 => 'group_related',
        12 => 'group_categories',
        13 => 'links',
        14 => 'field_related_publications',
        17 => 'field_related_links',
        18 => 'submitted_by',
        19 => 'field_core_areas',
        21 => 'field_related_sites',
        24 => 'field_reds_searcher_keywords',
        25 => 'field_keywords',
        28 => 'field_dataset_table4class',
        30 => 'field_dataset_2006class',
      ),
    ),
    'fields' => array(
      'group_summary' => 'left',
      'field_abstract' => 'left',
      'field_person_publisher' => 'left',
      'field_additional_information' => 'left',
      'group_dates' => 'left',
      'field_short_name' => 'left',
      'group_people' => 'left',
      'field_data_set_id' => 'left',
      'group_methodology' => 'left',
      'field_purpose' => 'left',
      'group_related' => 'right',
      'field_methods' => 'left',
      'group_categories' => 'right',
      'links' => 'right',
      'field_related_publications' => 'right',
      'field_instrumentation' => 'left',
      'field_maintenance' => 'left',
      'field_related_links' => 'right',
      'submitted_by' => 'right',
      'field_core_areas' => 'right',
      'field_quality_assurance' => 'left',
      'field_related_sites' => 'right',
      'field_person_creator' => 'left',
      'field_person_contact' => 'left',
      'field_reds_searcher_keywords' => 'right',
      'field_keywords' => 'right',
      'field_project_roles' => 'left',
      'field_date_range' => 'left',
      'field_dataset_table4class' => 'right',
      'field_publication_date' => 'left',
      'field_dataset_2006class' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|data_set|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|data_set|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'data_set';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_short_name',
        1 => 'field_dataset_duration',
        2 => 'field_numeric_data_set_id',
        3 => 'field_core_areas',
        4 => 'field_publication_date',
        5 => 'title',
        6 => 'field_keywords',
        7 => 'field_date_range',
        8 => 'field_data_set_id',
        9 => 'field_abstract',
        10 => 'field_reds_searcher_keywords',
        11 => 'field_purpose',
        12 => 'field_dataset_2015category',
        13 => 'group_details',
        14 => 'field_additional_information',
        15 => 'field_dataset_2006class',
        16 => 'group_read_only',
        17 => 'field_maintenance',
        18 => 'field_data_sources',
        19 => 'field_dataset_table4class',
        20 => 'path',
        21 => 'group_basic',
        22 => 'field_dataset_program',
        23 => 'field_eml_revision_id',
        24 => 'field_eml_hash',
        25 => 'group_data_sources',
        26 => 'group_personnel',
        27 => 'field_eml_valid',
        28 => 'field_eml_link',
        29 => 'group_methods',
        30 => 'field_doi',
        31 => 'group_taxonomy',
        32 => 'group_geo_temporal',
        33 => 'group_related',
        34 => 'field_related_links',
        35 => 'field_related_publications',
        36 => 'field_related_sites',
        37 => 'field_methods',
        38 => 'field_quality_assurance',
        39 => 'field_instrumentation',
        40 => 'field_person_creator',
        41 => 'field_person_contact',
        42 => 'field_person_metadata_provider',
        43 => 'field_person_publisher',
        44 => 'field_project_roles',
        45 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_short_name' => 'header',
      'field_dataset_duration' => 'header',
      'field_numeric_data_set_id' => 'header',
      'field_core_areas' => 'header',
      'field_publication_date' => 'header',
      'title' => 'header',
      'field_keywords' => 'header',
      'field_date_range' => 'header',
      'field_data_set_id' => 'header',
      'field_abstract' => 'header',
      'field_reds_searcher_keywords' => 'header',
      'field_purpose' => 'header',
      'field_dataset_2015category' => 'header',
      'group_details' => 'header',
      'field_additional_information' => 'header',
      'field_dataset_2006class' => 'header',
      'group_read_only' => 'header',
      'field_maintenance' => 'header',
      'field_data_sources' => 'header',
      'field_dataset_table4class' => 'header',
      'path' => 'header',
      'group_basic' => 'header',
      'field_dataset_program' => 'header',
      'field_eml_revision_id' => 'header',
      'field_eml_hash' => 'header',
      'group_data_sources' => 'header',
      'group_personnel' => 'header',
      'field_eml_valid' => 'header',
      'field_eml_link' => 'header',
      'group_methods' => 'header',
      'field_doi' => 'header',
      'group_taxonomy' => 'header',
      'group_geo_temporal' => 'header',
      'group_related' => 'header',
      'field_related_links' => 'header',
      'field_related_publications' => 'header',
      'field_related_sites' => 'header',
      'field_methods' => 'header',
      'field_quality_assurance' => 'header',
      'field_instrumentation' => 'header',
      'field_person_creator' => 'header',
      'field_person_contact' => 'header',
      'field_person_metadata_provider' => 'header',
      'field_person_publisher' => 'header',
      'field_project_roles' => 'header',
      '_add_existing_field' => 'header',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|data_set|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|data_set|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'data_set';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_abstract',
        1 => 'field_data_set_id',
        8 => 'field_short_name',
      ),
      'right' => array(
        2 => 'field_project_roles',
        3 => 'field_related_publications',
        9 => 'field_related_links',
        10 => 'field_related_sites',
        13 => 'field_data_sources',
      ),
      'left' => array(
        4 => 'field_core_areas',
        5 => 'field_publication_date',
        6 => 'field_date_range',
        7 => 'field_keywords',
      ),
      'footer' => array(
        11 => 'field_purpose',
        12 => 'field_methods',
        14 => 'field_instrumentation',
        15 => 'field_maintenance',
        16 => 'field_quality_assurance',
        17 => 'field_additional_information',
        18 => 'field_restricted',
      ),
    ),
    'fields' => array(
      'field_abstract' => 'header',
      'field_data_set_id' => 'header',
      'field_project_roles' => 'right',
      'field_related_publications' => 'right',
      'field_core_areas' => 'left',
      'field_publication_date' => 'left',
      'field_date_range' => 'left',
      'field_keywords' => 'left',
      'field_short_name' => 'header',
      'field_related_links' => 'right',
      'field_related_sites' => 'right',
      'field_purpose' => 'footer',
      'field_methods' => 'footer',
      'field_data_sources' => 'right',
      'field_instrumentation' => 'footer',
      'field_maintenance' => 'footer',
      'field_quality_assurance' => 'footer',
      'field_additional_information' => 'footer',
      'field_restricted' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_sidebars' => 1,
  );
  $export['node|data_set|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|data_set|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'data_set';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_dataset_duration',
        1 => 'title',
        2 => 'field_doi',
        3 => 'field_data_set_id',
        4 => 'field_abstract',
        5 => 'field_publication_date',
        6 => 'field_date_range',
        7 => 'field_core_areas',
        8 => 'field_keywords',
        9 => 'field_related_sites',
        10 => 'field_data_sources',
      ),
    ),
    'fields' => array(
      'field_dataset_duration' => 'ds_content',
      'title' => 'ds_content',
      'field_doi' => 'ds_content',
      'field_data_set_id' => 'ds_content',
      'field_abstract' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'field_date_range' => 'ds_content',
      'field_core_areas' => 'ds_content',
      'field_keywords' => 'ds_content',
      'field_related_sites' => 'ds_content',
      'field_data_sources' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|data_set|search_result'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function deims_data_set_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'dataset_display';
  $ds_view_mode->label = 'Dataset Display';
  $ds_view_mode->entities = array(
    'data_set' => 'data_set',
  );
  $export['dataset_display'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'datasetspanels';
  $ds_view_mode->label = 'DataSetsPanels';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['datasetspanels'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'datasetviewmode';
  $ds_view_mode->label = 'data set view mode';
  $ds_view_mode->entities = array(
    'data_set' => 'data_set',
  );
  $export['datasetviewmode'] = $ds_view_mode;

  return $export;
}
