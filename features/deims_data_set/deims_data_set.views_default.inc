<?php
/**
 * @file
 * deims_data_set.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function deims_data_set_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'data_set_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data set administration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data sets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'name' => 'name',
    'created' => 'created',
    'status' => 'status',
    'field_eml_link' => 'field_eml_link',
    'field_eml_valid' => 'field_eml_valid',
    'field_doi' => 'field_doi',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_eml_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-medium',
    ),
    'field_eml_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-medium',
    ),
    'field_doi' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-low',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No data sets available.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '25';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pasta_action_dataset_update_doi' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pasta_action_dataset_enqueue_validation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created on';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: EML Link */
  $handler->display->display_options['fields']['field_eml_link']['id'] = 'field_eml_link';
  $handler->display->display_options['fields']['field_eml_link']['table'] = 'field_data_field_eml_link';
  $handler->display->display_options['fields']['field_eml_link']['field'] = 'field_eml_link';
  $handler->display->display_options['fields']['field_eml_link']['label'] = 'EML';
  $handler->display->display_options['fields']['field_eml_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_eml_link']['alter']['preserve_tags'] = '<a>';
  /* Field: Content: EML is valid */
  $handler->display->display_options['fields']['field_eml_valid']['id'] = 'field_eml_valid';
  $handler->display->display_options['fields']['field_eml_valid']['table'] = 'field_data_field_eml_valid';
  $handler->display->display_options['fields']['field_eml_valid']['field'] = 'field_eml_valid';
  $handler->display->display_options['fields']['field_eml_valid']['label'] = 'Valid EML?';
  $handler->display->display_options['fields']['field_eml_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eml_valid']['empty'] = 'Unknown';
  $handler->display->display_options['fields']['field_eml_valid']['settings'] = array(
    'type' => 'unicode-yes-no',
    'type_custom_true' => '',
    'type_custom_false' => '',
    'not' => 0,
  );
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/data-sets';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Data sets';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['data_set_admin'] = $view;

  $view = new view();
  $view->name = 'data_sets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data sets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data sets unformattel list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_numeric_data_set_id' => 'field_numeric_data_set_id',
    'title' => 'title',
    'field_person_contact' => 'field_person_contact',
    'field_dataset_duration' => 'field_dataset_duration',
    'field_date_range' => 'field_date_range',
  );
  $handler->display->display_options['style_options']['default'] = 'field_numeric_data_set_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_numeric_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_person_contact' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_dataset_duration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  /* Field: Content: Data set ID */
  $handler->display->display_options['fields']['field_data_set_id']['id'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['field'] = 'field_data_set_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (Data Set Identifier)';
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  /* Sort criterion: Content: Numeric Data Set ID (field_numeric_data_set_id) */
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['id'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['field'] = 'field_numeric_data_set_id_value';
  /* Contextual filter: Content: Data set ID (field_data_set_id) */
  $handler->display->display_options['arguments']['field_data_set_id_value']['id'] = 'field_data_set_id_value';
  $handler->display->display_options['arguments']['field_data_set_id_value']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['arguments']['field_data_set_id_value']['field'] = 'field_data_set_id_value';
  $handler->display->display_options['arguments']['field_data_set_id_value']['relationship'] = 'field_data_sources_target_id';
  $handler->display->display_options['arguments']['field_data_set_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_data_set_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_data_set_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_data_set_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_data_set_id_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_data_set_id_value']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_data_set_id_value']['validate_options']['types'] = array(
    'data_source' => 'data_source',
  );
  $handler->display->display_options['arguments']['field_data_set_id_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Research Program (field_dataset_program) */
  $handler->display->display_options['filters']['field_dataset_program_tid']['id'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['table'] = 'field_data_field_dataset_program';
  $handler->display->display_options['filters']['field_dataset_program_tid']['field'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['vocabulary'] = 'program';

  /* Display: Data Sets */
  $handler = $view->new_display('page', 'Data Sets', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data sets';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_numeric_data_set_id' => 'field_numeric_data_set_id',
    'title' => 'title',
    'field_abstract' => 'field_abstract',
    'field_person_creator' => 'field_person_creator',
    'field_person_contact' => 'field_person_contact',
  );
  $handler->display->display_options['style_options']['default'] = 'field_numeric_data_set_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_numeric_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_abstract' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_person_creator' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_person_contact' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['label'] = 'Data Sets Catalog';
  $handler->display->display_options['header']['result']['content'] = '@start to @end';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_numeric_data_set_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['type'] = 'text_plain';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_person_creator']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Numeric Data Set ID (field_numeric_data_set_id) */
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['id'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['field'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Research Program (field_dataset_program) */
  $handler->display->display_options['filters']['field_dataset_program_tid']['id'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['table'] = 'field_data_field_dataset_program';
  $handler->display->display_options['filters']['field_dataset_program_tid']['field'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['value'] = array(
    1323 => '1323',
    1324 => '1324',
  );
  $handler->display->display_options['filters']['field_dataset_program_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_dataset_program_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['operator_id'] = 'field_dataset_program_tid_op';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['label'] = 'Program:';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['operator'] = 'field_dataset_program_tid_op';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['identifier'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['group_info']['label'] = 'Program (field_dataset_program)';
  $handler->display->display_options['filters']['field_dataset_program_tid']['group_info']['identifier'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_dataset_program_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_dataset_program_tid']['vocabulary'] = 'program';
  $handler->display->display_options['filters']['field_dataset_program_tid']['error_message'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Search by any word(s) in Data Set Identifier and/or Abstract';
  $handler->display->display_options['filters']['combine']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['combine']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_abstract' => 'field_abstract',
  );
  $handler->display->display_options['path'] = 'datacatalog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Data';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Data Sets by Owner */
  $handler = $view->new_display('page', 'Data Sets by Owner', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data sets by Owner';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person_creator' => 'field_person_creator',
    'title' => 'title',
    'field_numeric_data_set_id' => 'field_numeric_data_set_id',
  );
  $handler->display->display_options['style_options']['default'] = 'field_numeric_data_set_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person_creator' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_numeric_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '10',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_person_creator']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Data Set Identifier';
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_numeric_data_set_id']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Photographer (field_person_creator) */
  $handler->display->display_options['filters']['field_person_creator_target_id']['id'] = 'field_person_creator_target_id';
  $handler->display->display_options['filters']['field_person_creator_target_id']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['filters']['field_person_creator_target_id']['field'] = 'field_person_creator_target_id';
  $handler->display->display_options['filters']['field_person_creator_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_creator_target_id']['expose']['operator_id'] = 'field_person_creator_target_id_op';
  $handler->display->display_options['filters']['field_person_creator_target_id']['expose']['label'] = 'Owner / Creator';
  $handler->display->display_options['filters']['field_person_creator_target_id']['expose']['operator'] = 'field_person_creator_target_id_op';
  $handler->display->display_options['filters']['field_person_creator_target_id']['expose']['identifier'] = 'field_person_creator_target_id';
  $handler->display->display_options['filters']['field_person_creator_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'datasets-byowner';

  /* Display: Data Sets by ID */
  $handler = $view->new_display('page', 'Data Sets by ID', 'page_2');
  $handler->display->display_options['display_description'] = 'Table used for admin purpose only to fill the Numeric Data Set ID field';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_data_set_id' => 'field_data_set_id',
    'title' => 'title',
    'field_numeric_data_set_id' => 'field_numeric_data_set_id',
  );
  $handler->display->display_options['style_options']['default'] = 'field_numeric_data_set_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_numeric_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id_1']['id'] = 'field_data_sources_target_id_1';
  $handler->display->display_options['relationships']['field_data_sources_target_id_1']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id_1']['field'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id_1']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Data set ID */
  $handler->display->display_options['fields']['field_data_set_id']['id'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['field'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['exclude'] = TRUE;
  /* Field: Content: Data sources */
  $handler->display->display_options['fields']['field_data_sources']['id'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['field'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['relationship'] = 'field_data_sources_target_id';
  $handler->display->display_options['fields']['field_data_sources']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_data_sources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_data_sources']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'datasetsbyID';

  /* Display: Data Sets Content pane */
  $handler = $view->new_display('panel_pane', 'Data Sets Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Data set ID */
  $handler->display->display_options['fields']['field_data_set_id']['id'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['field'] = 'field_data_set_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (Data Set Identifier)';
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_data_sources_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Data sources */
  $handler->display->display_options['fields']['field_data_sources']['id'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['field'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_data_sources']['delta_offset'] = '0';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_data_set_id' => 'field_data_set_id',
    'title' => 0,
    'field_numeric_data_set_id' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Data set ID */
  $handler->display->display_options['fields']['field_data_set_id']['id'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['field'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (Data Set Identifier)';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  /* Field: Content: Variables */
  $handler->display->display_options['fields']['field_variables']['id'] = 'field_variables';
  $handler->display->display_options['fields']['field_variables']['table'] = 'field_data_field_variables';
  $handler->display->display_options['fields']['field_variables']['field'] = 'field_variables';
  $handler->display->display_options['fields']['field_variables']['relationship'] = 'field_data_sources_target_id';
  $handler->display->display_options['fields']['field_variables']['click_sort_column'] = 'name';
  $handler->display->display_options['fields']['field_variables']['type'] = 'deims_variable_summary';
  $handler->display->display_options['fields']['field_variables']['delta_offset'] = '0';

  /* Display: Data Sets Keyword Assignments */
  $handler = $view->new_display('page', 'Data Sets Keyword Assignments', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data sets Keywords';
  $handler->display->display_options['display_description'] = 'Assignment of Keywords to data sets by different categories, including Researcher\'s set (See List), LTER Controlled Vocab (See L';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_numeric_data_set_id' => 'field_numeric_data_set_id',
    'title' => 'title',
    'field_dataset_2015category' => 'field_dataset_2015category',
    'field_keywords' => 'field_keywords',
    'field_reds_searcher_keywords' => 'field_reds_searcher_keywords',
  );
  $handler->display->display_options['style_options']['default'] = 'field_numeric_data_set_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_numeric_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_dataset_2015category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_keywords' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_reds_searcher_keywords' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_numeric_data_set_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (Data Set Identifier)';
  /* Field: Content: 2015 Data Product Category */
  $handler->display->display_options['fields']['field_dataset_2015category']['id'] = 'field_dataset_2015category';
  $handler->display->display_options['fields']['field_dataset_2015category']['table'] = 'field_data_field_dataset_2015category';
  $handler->display->display_options['fields']['field_dataset_2015category']['field'] = 'field_dataset_2015category';
  $handler->display->display_options['fields']['field_dataset_2015category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dataset_2015category']['multi_type'] = 'ul';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_keywords']['multi_type'] = 'ul';
  /* Field: Content: Researcher's Keywords */
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['id'] = 'field_reds_searcher_keywords';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['table'] = 'field_data_field_reds_searcher_keywords';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['field'] = 'field_reds_searcher_keywords';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Keywords (LTER Vocab)';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_keywords_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'lter_controlled_vocabulary';
  $handler->display->display_options['filters']['field_keywords_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: 2015 Data Product Category (field_dataset_2015category) */
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['id'] = 'field_dataset_2015category_tid';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['table'] = 'field_data_field_dataset_2015category';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['field'] = 'field_dataset_2015category_tid';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['expose']['operator_id'] = 'field_dataset_2015category_tid_op';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['expose']['label'] = '2015 Data Product Category';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['expose']['operator'] = 'field_dataset_2015category_tid_op';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['expose']['identifier'] = 'field_dataset_2015category_tid';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['vocabulary'] = '2015dataproducts13_36';
  $handler->display->display_options['filters']['field_dataset_2015category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Researcher&#039;s Keywords (field_reds_searcher_keywords) */
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['id'] = 'field_reds_searcher_keywords_tid';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['table'] = 'field_data_field_reds_searcher_keywords';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['field'] = 'field_reds_searcher_keywords_tid';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['expose']['operator_id'] = 'field_reds_searcher_keywords_tid_op';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['expose']['label'] = 'Researcher\'s Keywords';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['expose']['operator'] = 'field_reds_searcher_keywords_tid_op';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['expose']['identifier'] = 'field_reds_searcher_keywords_tid';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['vocabulary'] = 'data_sets_vocabulary_v';
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_reds_searcher_keywords_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'datasets-keys';

  /* Display: Data Sets by Duration */
  $handler = $view->new_display('page', 'Data Sets by Duration', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data sets by duration';
  $handler->display->display_options['display_description'] = 'a search tool to find data sets list by its duration (Long-Term, Complete, Ongoing)';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (Data Set Identifier)';
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_person_contact']['id'] = 'field_person_contact';
  $handler->display->display_options['fields']['field_person_contact']['table'] = 'field_data_field_person_contact';
  $handler->display->display_options['fields']['field_person_contact']['field'] = 'field_person_contact';
  $handler->display->display_options['fields']['field_person_contact']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_person_contact']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_person_contact']['multi_type'] = 'ul';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_dataset_duration']['id'] = 'field_dataset_duration';
  $handler->display->display_options['fields']['field_dataset_duration']['table'] = 'field_data_field_dataset_duration';
  $handler->display->display_options['fields']['field_dataset_duration']['field'] = 'field_dataset_duration';
  $handler->display->display_options['fields']['field_dataset_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_duration']['delta_offset'] = '0';
  /* Field: Content: Date Range */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['alter']['text'] = '[field_date_range-value] to [field_date_range-value2]';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'iso_yeardate',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Duration (field_dataset_duration) */
  $handler->display->display_options['sorts']['field_dataset_duration_value']['id'] = 'field_dataset_duration_value';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['table'] = 'field_data_field_dataset_duration';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['field'] = 'field_dataset_duration_value';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['expose']['label'] = 'Duration (Long-Term and / or Completed or Ongoing)';
  /* Sort criterion: Content: Numeric Data Set ID (field_numeric_data_set_id) */
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['id'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['field'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Duration (field_dataset_duration) */
  $handler->display->display_options['filters']['field_dataset_duration_value']['id'] = 'field_dataset_duration_value';
  $handler->display->display_options['filters']['field_dataset_duration_value']['table'] = 'field_data_field_dataset_duration';
  $handler->display->display_options['filters']['field_dataset_duration_value']['field'] = 'field_dataset_duration_value';
  $handler->display->display_options['filters']['field_dataset_duration_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dataset_duration_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_duration_value']['expose']['operator_id'] = 'field_dataset_duration_value_op';
  $handler->display->display_options['filters']['field_dataset_duration_value']['expose']['label'] = 'Duration (Long-Term and/or Completed or Ongoing)';
  $handler->display->display_options['filters']['field_dataset_duration_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_duration_value']['expose']['operator'] = 'field_dataset_duration_value_op';
  $handler->display->display_options['filters']['field_dataset_duration_value']['expose']['identifier'] = 'field_dataset_duration_value';
  $handler->display->display_options['filters']['field_dataset_duration_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'data/datasets/ongoing-longterm-completed';

  /* Display: Data Sets by Program */
  $handler = $view->new_display('page', 'Data Sets by Program', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data sets by Program';
  $handler->display->display_options['display_description'] = '(LTER or non-LTER)';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_numeric_data_set_id' => 'field_numeric_data_set_id',
    'field_abstract' => 'field_abstract',
    'field_person_creator' => 'field_person_creator',
  );
  $handler->display->display_options['style_options']['default'] = 'field_numeric_data_set_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_numeric_data_set_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_abstract' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_person_creator' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Numeric Data Set ID */
  $handler->display->display_options['fields']['field_numeric_data_set_id']['id'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['field'] = 'field_numeric_data_set_id';
  $handler->display->display_options['fields']['field_numeric_data_set_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_numeric_data_set_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_abstract']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Author/Owner';
  $handler->display->display_options['fields']['field_person_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Duration (field_dataset_duration) */
  $handler->display->display_options['sorts']['field_dataset_duration_value']['id'] = 'field_dataset_duration_value';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['table'] = 'field_data_field_dataset_duration';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['field'] = 'field_dataset_duration_value';
  $handler->display->display_options['sorts']['field_dataset_duration_value']['expose']['label'] = 'Duration (field_dataset_duration)';
  /* Sort criterion: Content: Numeric Data Set ID (field_numeric_data_set_id) */
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['id'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['table'] = 'field_data_field_numeric_data_set_id';
  $handler->display->display_options['sorts']['field_numeric_data_set_id_value']['field'] = 'field_numeric_data_set_id_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Research Program (field_dataset_program) */
  $handler->display->display_options['filters']['field_dataset_program_tid']['id'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['table'] = 'field_data_field_dataset_program';
  $handler->display->display_options['filters']['field_dataset_program_tid']['field'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['value'] = array(
    1324 => '1324',
  );
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['operator_id'] = 'field_dataset_program_tid_op';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['label'] = 'Research Program';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['operator'] = 'field_dataset_program_tid_op';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['identifier'] = 'field_dataset_program_tid';
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_dataset_program_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_program_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_dataset_program_tid']['vocabulary'] = 'program';
  $handler->display->display_options['filters']['field_dataset_program_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_dataset_program_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'data/datasets/nonLTER';
  $export['data_sets'] = $view;

  return $export;
}
