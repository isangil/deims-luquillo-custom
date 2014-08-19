<?php
/**
 * @file
 * luquillo_eda_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luquillo_eda_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bulk_operations_for_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'bulk operations for articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'bulk operations for articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'article::body' => 'article::body',
          'article::field_article_date' => 'article::field_article_date',
          'article::field_files' => 'article::field_files',
          'article::field_keywords' => 'article::field_keywords',
          'article::field_related_people' => 'article::field_related_people',
          'article::field_related_publications' => 'article::field_related_publications',
          'article::field_section' => 'article::field_section',
          'article::field_article_type' => 'article::field_article_type',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => '',
    ),
  );
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bulk-operations-for-articles';
  $handler->display->display_options['menu']['title'] = 'bulk operations for articles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['bulk_operations_for_articles'] = $view;

  $view = new view();
  $view->name = 'data_sets_associated_with_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data Sets associated with people';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data Sets associated with people';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_person_creator',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person_creator' => 'field_person_creator',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person_creator' => array(
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
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['id'] = 'reverse_field_person_creator_node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['field'] = 'reverse_field_person_creator_node';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_person_creator']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Photographer (field_person_creator) */
  $handler->display->display_options['sorts']['field_person_creator_target_id']['id'] = 'field_person_creator_target_id';
  $handler->display->display_options['sorts']['field_person_creator_target_id']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['sorts']['field_person_creator_target_id']['field'] = 'field_person_creator_target_id';
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
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_person_creator']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['path'] = 'data-sets-associated-with-people';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['id'] = 'reverse_field_related_people_node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['field'] = 'reverse_field_related_people_node';
  $handler->display->display_options['relationships']['reverse_field_related_people_node']['required'] = TRUE;
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
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'data-sets-associated-with-people2';
  $export['data_sets_associated_with_people'] = $view;

  $view = new view();
  $view->name = 'data_sets_by_lter_keyword';
  $view->description = 'Data set list with specific LTER Controlled vocab keyword';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulk Operations of Data Sets by LTER Keyword';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data Sets by LTER Keyword';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_keywords' => 'field_keywords',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = 'LTER Keywords';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_keywords']['multi_type'] = 'ul';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Data set ID */
  $handler->display->display_options['fields']['field_data_set_id']['id'] = 'field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['fields']['field_data_set_id']['field'] = 'field_data_set_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = 'LTER Keywords';
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_keywords']['multi_type'] = 'ul';
  /* Field: Content: Researcher's Keywords */
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['id'] = 'field_reds_searcher_keywords';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['table'] = 'field_data_field_reds_searcher_keywords';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['field'] = 'field_reds_searcher_keywords';
  $handler->display->display_options['fields']['field_reds_searcher_keywords']['delta_offset'] = '0';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
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
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'data-sets-by-lter-keyword';
  $export['data_sets_by_lter_keyword'] = $view;

  $view = new view();
  $view->name = 'data_sets_owners';
  $view->description = 'A table of People and their data sets';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'data sets owners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'data set title';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['id'] = 'reverse_field_person_creator_node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['field'] = 'reverse_field_person_creator_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'data set owner';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['id'] = 'reverse_field_person_creator_node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['field'] = 'reverse_field_person_creator_node';
  $handler->display->display_options['relationships']['reverse_field_person_creator_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['relationship'] = 'reverse_field_person_creator_node';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_creator']['alter']['text'] = '[field_person_creator]';
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_person_creator']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'data-sets-owners';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'data-sets-title';
  $export['data_sets_owners'] = $view;

  $view = new view();
  $view->name = 'data_sources_by_data_sets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data sources by data sets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data Files by Data Source';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_data_sources' => 'field_data_sources',
    'field_data_source_file' => 'field_data_source_file',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_data_sources' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_data_source_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Data sources */
  $handler->display->display_options['fields']['field_data_sources']['id'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['field'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_data_sources']['alter']['text'] = '[field_data_sources] ';
  $handler->display->display_options['fields']['field_data_sources']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_data_sources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_data_sources']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: File upload */
  $handler->display->display_options['fields']['field_data_source_file']['id'] = 'field_data_source_file';
  $handler->display->display_options['fields']['field_data_source_file']['table'] = 'field_data_field_data_source_file';
  $handler->display->display_options['fields']['field_data_source_file']['field'] = 'field_data_source_file';
  $handler->display->display_options['fields']['field_data_source_file']['relationship'] = 'field_data_sources_target_id';
  $handler->display->display_options['fields']['field_data_source_file']['alter']['text'] = '[field_data_source_file]';
  $handler->display->display_options['fields']['field_data_source_file']['click_sort_column'] = 'fid';
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_source' => 'data_source',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Data Files by Data Source */
  $handler = $view->new_display('page', 'Data Files by Data Source', 'page');
  $handler->display->display_options['path'] = 'data-files-by-data_source';
  $export['data_sources_by_data_sets'] = $view;

  $view = new view();
  $view->name = 'front_page_slider_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'front page slider 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'flex-slider-1280x330',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slides' => 'slides',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Slideshow Keyword (field_slideshow_keyword) */
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['id'] = 'field_slideshow_keyword_tid';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['table'] = 'field_data_field_slideshow_keyword';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['field'] = 'field_slideshow_keyword_tid';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['value'] = array(
    1329 => '1329',
  );
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['vocabulary'] = 'slides_show';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-slider-2';

  /* Display: Block slider2 */
  $handler = $view->new_display('block', 'Block slider2', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_images' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_images' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['front_page_slider_2'] = $view;

  $view = new view();
  $view->name = 'galleryofluqpeople';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'galleryofluqpeople';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'luq_research_gallery_style',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_picture']['delta_offset'] = '0';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_photographer']['id'] = 'field_photographer';
  $handler->display->display_options['fields']['field_photographer']['table'] = 'field_data_field_photographer';
  $handler->display->display_options['fields']['field_photographer']['field'] = 'field_photographer';
  $handler->display->display_options['fields']['field_photographer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Picture Description */
  $handler->display->display_options['fields']['field_picture_description']['id'] = 'field_picture_description';
  $handler->display->display_options['fields']['field_picture_description']['table'] = 'field_data_field_picture_description';
  $handler->display->display_options['fields']['field_picture_description']['field'] = 'field_picture_description';
  $handler->display->display_options['fields']['field_picture_description']['label'] = 'Gallery Description';
  $handler->display->display_options['fields']['field_picture_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_picture_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Date (Range) Picture Taken in txt */
  $handler->display->display_options['fields']['field_date_picture_taken_in_txt']['id'] = 'field_date_picture_taken_in_txt';
  $handler->display->display_options['fields']['field_date_picture_taken_in_txt']['table'] = 'field_data_field_date_picture_taken_in_txt';
  $handler->display->display_options['fields']['field_date_picture_taken_in_txt']['field'] = 'field_date_picture_taken_in_txt';
  $handler->display->display_options['fields']['field_date_picture_taken_in_txt']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_date_picture_taken_in_txt']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date_picture_taken_in_txt']['multi_type'] = 'ul';
  /* Field: Content: Data Set Link */
  $handler->display->display_options['fields']['field_data_set_link']['id'] = 'field_data_set_link';
  $handler->display->display_options['fields']['field_data_set_link']['table'] = 'field_data_field_data_set_link';
  $handler->display->display_options['fields']['field_data_set_link']['field'] = 'field_data_set_link';
  $handler->display->display_options['fields']['field_data_set_link']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_data_set_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_data_set_link']['multi_type'] = 'ul';
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'galleryofluqpeople';
  $export['galleryofluqpeople'] = $view;

  $view = new view();
  $view->name = 'key_finding_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Key Finding List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Key Finding List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'article_key_finding_list';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['value'] = array(
    1328 => '1328',
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'key-finding-list';
  $export['key_finding_list'] = $view;

  $view = new view();
  $view->name = 'luq_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'luq gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'LUQ Research Gallery: Hurricane George (September 1998)';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_image_gallery',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_image_gallery' => 'field_image_gallery',
    'field_image_description' => 'field_image_description',
    'field_image_title' => 'field_image_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_image_gallery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_image_description' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_image_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'LUQ Research Gallery';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'luq_research_gallery_style',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_gallery']['separator'] = '';
  /* Field: Content: Image Description */
  $handler->display->display_options['fields']['field_image_description']['id'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['table'] = 'field_data_field_image_description';
  $handler->display->display_options['fields']['field_image_description']['field'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['type'] = 'text_plain';
  /* Field: Content: Image Title */
  $handler->display->display_options['fields']['field_image_title']['id'] = 'field_image_title';
  $handler->display->display_options['fields']['field_image_title']['table'] = 'field_data_field_image_title';
  $handler->display->display_options['fields']['field_image_title']['field'] = 'field_image_title';
  $handler->display->display_options['fields']['field_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_title']['type'] = 'text_plain';
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 0,
  );
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'luq_research_photo_gallery' => 'luq_research_photo_gallery',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'LUQ Research Gallery: Hurricane George';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'luq-gallery/hurricaneGeorge';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_photographer_full_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_gallery' => 'field_image_gallery',
    'field_gallery_description_final' => 'field_gallery_description_final',
    'field_photographer_full_name' => 'field_photographer_full_name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_photographer_full_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_gallery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_gallery_description_final' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_photographer_full_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
      'responsive' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_image_gallery']['id'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['table'] = 'field_data_field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['field'] = 'field_image_gallery';
  $handler->display->display_options['fields']['field_image_gallery']['label'] = 'Gallery';
  $handler->display->display_options['fields']['field_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_gallery']['settings'] = array(
    'image_style' => 'luq_research_gallery_style',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_gallery']['separator'] = '';
  /* Field: Content: Image Description */
  $handler->display->display_options['fields']['field_image_description']['id'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['table'] = 'field_data_field_image_description';
  $handler->display->display_options['fields']['field_image_description']['field'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['exclude'] = TRUE;
  /* Field: Content: Photographer */
  $handler->display->display_options['fields']['field_person_creator']['id'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['field'] = 'field_person_creator';
  $handler->display->display_options['fields']['field_person_creator']['label'] = 'Owner/Creator';
  $handler->display->display_options['fields']['field_person_creator']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_creator']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['path'] = 'luq-gallery/afterhurricaneGeorge';
  $export['luq_gallery'] = $view;

  $view = new view();
  $view->name = 'luqschoolyard_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LUQ Schoolyard Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'LUQ Schoolyard Images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'flex900x410',
    'image_link' => 'file',
  );
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: slideshow_schoolyard */
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['id'] = 'field_slideshow_keyword_tid';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['table'] = 'field_data_field_slideshow_keyword';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['field'] = 'field_slideshow_keyword_tid';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['ui_name'] = 'slideshow_schoolyard';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['value'] = array(
    1330 => '1330',
  );
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_slideshow_keyword_tid']['vocabulary'] = 'slides_show';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['luqschoolyard_images'] = $view;

  $view = new view();
  $view->name = 'organizations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url] ';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'organizations';
  $export['organizations'] = $view;

  $view = new view();
  $view->name = 'peoples_views';
  $view->description = 'Views to see people by role type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'peoples views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_email' => 'field_email',
    'field_phone' => 'field_phone',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = '[field_name-family], [field_name-given]  [field_name-middle]';
  $handler->display->display_options['fields']['field_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['path'] = 'http://luq2.lternet.edu/people/[field_name-family]';
  $handler->display->display_options['fields']['field_name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'family';
  $handler->display->display_options['fields']['field_name']['type'] = 'name_eml_individualName';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_name_family']['expose']['label'] = 'Last Name';
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
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: LUQ LTER Status (field_person_status) */
  $handler->display->display_options['filters']['field_person_status_value']['id'] = 'field_person_status_value';
  $handler->display->display_options['filters']['field_person_status_value']['table'] = 'field_data_field_person_status';
  $handler->display->display_options['filters']['field_person_status_value']['field'] = 'field_person_status_value';
  $handler->display->display_options['filters']['field_person_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_person_status_value']['group'] = 1;
  /* Filter criterion: Content: Name (field_name:family) */
  $handler->display->display_options['filters']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_family']['expose']['operator_id'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['label'] = 'Search by Last Name:';
  $handler->display->display_options['filters']['field_name_family']['expose']['operator'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['identifier'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'peoples-views';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'PEOPLE';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['peoples_views'] = $view;

  $view = new view();
  $view->name = 'projects_and_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Projects and People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research Projects Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_abstract']['settings'] = array(
    'trim_length' => '1000',
  );
  /* Field: Content: Project Director */
  $handler->display->display_options['fields']['field_project_director']['id'] = 'field_project_director';
  $handler->display->display_options['fields']['field_project_director']['table'] = 'field_data_field_project_director';
  $handler->display->display_options['fields']['field_project_director']['field'] = 'field_project_director';
  $handler->display->display_options['fields']['field_project_director']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_project_contact']['id'] = 'field_project_contact';
  $handler->display->display_options['fields']['field_project_contact']['table'] = 'field_data_field_project_contact';
  $handler->display->display_options['fields']['field_project_contact']['field'] = 'field_project_contact';
  $handler->display->display_options['fields']['field_project_contact']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_contact']['delta_offset'] = '0';
  /* Field: Content: Project Scientist */
  $handler->display->display_options['fields']['field_project_scientist']['id'] = 'field_project_scientist';
  $handler->display->display_options['fields']['field_project_scientist']['table'] = 'field_data_field_project_scientist';
  $handler->display->display_options['fields']['field_project_scientist']['field'] = 'field_project_scientist';
  $handler->display->display_options['fields']['field_project_scientist']['label'] = 'Project Scientists';
  $handler->display->display_options['fields']['field_project_scientist']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_project_scientist']['delta_offset'] = '0';
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'research-projects-and-people';
  $export['projects_and_people'] = $view;

  $view = new view();
  $view->name = 'publications_view_search_by_year';
  $view->description = 'A view to search publications by year';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications By Year';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications By Year';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'citation' => 'citation',
    'biblio_year' => 'biblio_year',
    'biblio_abst_e' => 'biblio_abst_e',
  );
  $handler->display->display_options['style_options']['default'] = 'biblio_year';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-medium',
    ),
    'citation' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-medium',
    ),
    'biblio_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-medium',
    ),
    'biblio_abst_e' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Biblio: Author full name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'biblio_contributor_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Biblio: Year of Publication */
  $handler->display->display_options['fields']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_year']['field'] = 'biblio_year';
  /* Sort criterion: Biblio: Year of Publication */
  $handler->display->display_options['sorts']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['sorts']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Biblio: Type of Publication */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'biblio_types';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type of Publication';
  $handler->display->display_options['filters']['tid']['expose']['description'] = 'Select the type of publications (Journal Article. Book, Book Chapter,,etc.) to display';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Type of Publication';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Publications By Year */
  $handler = $view->new_display('page', 'Publications By Year', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Biblio: Type of Publication */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'biblio_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['label'] = 'Citation';
  /* Field: Biblio: Year of Publication */
  $handler->display->display_options['fields']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['biblio_year']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['biblio_year']['biblio_label'] = 1;
  $handler->display->display_options['path'] = 'publications-by-year';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'PUBLICATIONS';
  $handler->display->display_options['menu']['description'] = 'LUQ Publication list by Year';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Publications By Year with Abstract  */
  $handler = $view->new_display('page', 'Publications By Year with Abstract ', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Biblio: Type of Publication */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'biblio_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['label'] = 'Citation';
  /* Field: Biblio: Year of Publication */
  $handler->display->display_options['fields']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['biblio_year']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['biblio_year']['biblio_label'] = 1;
  /* Field: Biblio: Abstract */
  $handler->display->display_options['fields']['biblio_abst_e']['id'] = 'biblio_abst_e';
  $handler->display->display_options['fields']['biblio_abst_e']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_abst_e']['field'] = 'biblio_abst_e';
  $handler->display->display_options['fields']['biblio_abst_e']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['biblio_abst_e']['hide_alter_empty'] = FALSE;
  /* Field: Biblio: Accession Number */
  $handler->display->display_options['fields']['biblio_accession_number']['id'] = 'biblio_accession_number';
  $handler->display->display_options['fields']['biblio_accession_number']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_accession_number']['field'] = 'biblio_accession_number';
  $handler->display->display_options['fields']['biblio_accession_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['biblio_accession_number']['alter']['path'] = '[biblio_accession_number]';
  $handler->display->display_options['fields']['biblio_accession_number']['biblio_label'] = 1;
  /* Field: Bulk operations: Biblio */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'biblio_contributor_data';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Biblio Edit';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
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
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'status' => 'status',
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
      'selected' => 0,
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
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
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
  $handler->display->display_options['path'] = 'publications-by-year-withabstract';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'PUBLICATIONS';
  $handler->display->display_options['menu']['description'] = 'LUQ Publication list by Year';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['publications_view_search_by_year'] = $view;

  $view = new view();
  $view->name = 'research_group_4';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'research groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gesearch groups';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  $handler->display->display_options['empty']['entity']['empty'] = TRUE;
  $handler->display->display_options['empty']['entity']['view_mode'] = 'teaser';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'research_groups' => 'research_groups',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'research-groups2';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Research Goups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['research_group_4'] = $view;

  $view = new view();
  $view->name = 'research_groups6';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'research groups6';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'research groups6';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
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
    'research_groups' => 'research_groups',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'research-groups6';
  $export['research_groups6'] = $view;

  $view = new view();
  $view->name = 'variables_by_data_source';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'variables by data source';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'variables by data source';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_variables' => 'field_variables',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_variables' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Data sources (field_data_sources) */
  $handler->display->display_options['arguments']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['arguments']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['arguments']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  $handler->display->display_options['arguments']['field_data_sources_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_data_sources_target_id']['summary']['format'] = 'default_summary';
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
    'data_source' => 'data_source',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Data Source';
  /* Field: Content: Variables */
  $handler->display->display_options['fields']['field_variables']['id'] = 'field_variables';
  $handler->display->display_options['fields']['field_variables']['table'] = 'field_data_field_variables';
  $handler->display->display_options['fields']['field_variables']['field'] = 'field_variables';
  $handler->display->display_options['fields']['field_variables']['click_sort_column'] = 'name';
  $handler->display->display_options['fields']['field_variables']['type'] = 'bdp_attribute_list';
  $handler->display->display_options['fields']['field_variables']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_variables']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Variables (field_variables:name) */
  $handler->display->display_options['arguments']['field_variables_name']['id'] = 'field_variables_name';
  $handler->display->display_options['arguments']['field_variables_name']['table'] = 'field_data_field_variables';
  $handler->display->display_options['arguments']['field_variables_name']['field'] = 'field_variables_name';
  $handler->display->display_options['arguments']['field_variables_name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_variables_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_variables_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_variables_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_variables_name']['limit'] = '0';
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
    'data_source' => 'data_source',
  );
  $handler->display->display_options['path'] = 'variables-by-data-source';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'variables-by-data-source';
  $export['variables_by_data_source'] = $view;

  $view = new view();
  $view->name = 'variables_of_a_data_set';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'variables of a data set';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Data Files';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_data_sources' => 'field_data_sources',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_data_sources' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Data sources */
  $handler->display->display_options['fields']['field_data_sources']['id'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['field'] = 'field_data_sources';
  /* Contextual filter: Content: Data set ID (field_data_set_id) */
  $handler->display->display_options['arguments']['field_data_set_id_value']['id'] = 'field_data_set_id_value';
  $handler->display->display_options['arguments']['field_data_set_id_value']['table'] = 'field_data_field_data_set_id';
  $handler->display->display_options['arguments']['field_data_set_id_value']['field'] = 'field_data_set_id_value';
  $handler->display->display_options['arguments']['field_data_set_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_data_set_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_data_set_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_data_set_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_data_set_id_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Data Files */
  $handler = $view->new_display('page', 'Data Files', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Data sources */
  $handler->display->display_options['fields']['field_data_sources']['id'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['field'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_data_sources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_data_sources']['multi_type'] = 'ul';
  $handler->display->display_options['path'] = 'datafiles-of-a-data-set';

  /* Display: Variables only  */
  $handler = $view->new_display('page', 'Variables only ', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_data_sources_target_id']['id'] = 'field_data_sources_target_id';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['relationships']['field_data_sources_target_id']['field'] = 'field_data_sources_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Data sources */
  $handler->display->display_options['fields']['field_data_sources']['id'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['table'] = 'field_data_field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['field'] = 'field_data_sources';
  $handler->display->display_options['fields']['field_data_sources']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_data_sources']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_data_sources']['multi_type'] = 'ul';
  /* Field: Content: Variables */
  $handler->display->display_options['fields']['field_variables']['id'] = 'field_variables';
  $handler->display->display_options['fields']['field_variables']['table'] = 'field_data_field_variables';
  $handler->display->display_options['fields']['field_variables']['field'] = 'field_variables';
  $handler->display->display_options['fields']['field_variables']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_variables']['click_sort_column'] = 'name';
  $handler->display->display_options['fields']['field_variables']['type'] = 'iso_attribute_list';
  $handler->display->display_options['fields']['field_variables']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_variables']['multi_type'] = 'ul';
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
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'data_set' => 'data_set',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['path'] = 'datasetsvars';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Data Files of a Data Set';
  $export['variables_of_a_data_set'] = $view;

  return $export;
}
