<?php
/**
 * @file
 * deims_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function deims_person_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entity_reference_selection';
  $view->description = 'Provides selection displays to be used with node entity reference fields.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity reference selection: Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: People */
  $handler = $view->new_display('entityreference', 'People', 'entityreference_node_person');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Person Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['ui_name'] = 'Person Title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
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

  /* Display: People and Organizations */
  $handler = $view->new_display('entityreference', 'People and Organizations', 'entityreference_node_person_and_organization');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Person Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['ui_name'] = 'Person Title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['element_default_classes'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
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
    'organization' => 'organization',
    'person' => 'person',
  );
  $export['entity_reference_selection'] = $view;

  $view = new view();
  $view->name = 'personnel_luq_5';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personnel Luq 5';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'datatables';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: Content: Discipline */
  $handler->display->display_options['fields']['field_person_discipline']['id'] = 'field_person_discipline';
  $handler->display->display_options['fields']['field_person_discipline']['table'] = 'field_data_field_person_discipline';
  $handler->display->display_options['fields']['field_person_discipline']['field'] = 'field_person_discipline';
  $handler->display->display_options['fields']['field_person_discipline']['delta_offset'] = '0';
  /* Field: Content: Related Core Area */
  $handler->display->display_options['fields']['field_person_coreareas_termref']['id'] = 'field_person_coreareas_termref';
  $handler->display->display_options['fields']['field_person_coreareas_termref']['table'] = 'field_data_field_person_coreareas_termref';
  $handler->display->display_options['fields']['field_person_coreareas_termref']['field'] = 'field_person_coreareas_termref';
  $handler->display->display_options['fields']['field_person_coreareas_termref']['delta_offset'] = '0';
  /* Sort criterion: Content: LUQ 5 Researcher number (field_person_luq5researcher) */
  $handler->display->display_options['sorts']['field_person_luq5researcher_value']['id'] = 'field_person_luq5researcher_value';
  $handler->display->display_options['sorts']['field_person_luq5researcher_value']['table'] = 'field_data_field_person_luq5researcher';
  $handler->display->display_options['sorts']['field_person_luq5researcher_value']['field'] = 'field_person_luq5researcher_value';
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
  /* Filter criterion: Content: LUQ 5 Researcher number (field_person_luq5researcher) */
  $handler->display->display_options['filters']['field_person_luq5researcher_value']['id'] = 'field_person_luq5researcher_value';
  $handler->display->display_options['filters']['field_person_luq5researcher_value']['table'] = 'field_data_field_person_luq5researcher';
  $handler->display->display_options['filters']['field_person_luq5researcher_value']['field'] = 'field_person_luq5researcher_value';
  $handler->display->display_options['filters']['field_person_luq5researcher_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_person_luq5researcher_value']['value']['value'] = '0';

  /* Display: Luq 5 */
  $handler = $view->new_display('page', 'Luq 5', 'page');
  $handler->display->display_options['path'] = 'people/luquillo-5-personnel';

  /* Display: By Last Name */
  $handler = $view->new_display('page', 'By Last Name', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Luquillo Personnel by Last Name';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
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
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_person_role']['id'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['fields']['field_person_role']['field'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
  /* Filter criterion: Content: Name (field_name:family) */
  $handler->display->display_options['filters']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_family']['expose']['operator_id'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['label'] = 'Last Name';
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
  $handler->display->display_options['path'] = 'people/searchByLastName';

  /* Display: By Role */
  $handler = $view->new_display('page', 'By Role', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Luquillo Personnel by their Role';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
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
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_person_role']['id'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['fields']['field_person_role']['field'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['element_label_colon'] = FALSE;
  /* Field: Content: LUQ LTER Status */
  $handler->display->display_options['fields']['field_person_status']['id'] = 'field_person_status';
  $handler->display->display_options['fields']['field_person_status']['table'] = 'field_data_field_person_status';
  $handler->display->display_options['fields']['field_person_status']['field'] = 'field_person_status';
  $handler->display->display_options['fields']['field_person_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: LUQ LTER Status (field_person_status) */
  $handler->display->display_options['sorts']['field_person_status_value']['id'] = 'field_person_status_value';
  $handler->display->display_options['sorts']['field_person_status_value']['table'] = 'field_data_field_person_status';
  $handler->display->display_options['sorts']['field_person_status_value']['field'] = 'field_person_status_value';
  $handler->display->display_options['sorts']['field_person_status_value']['order'] = 'DESC';
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
  /* Filter criterion: Content: Role (field_person_role) */
  $handler->display->display_options['filters']['field_person_role_value']['id'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['filters']['field_person_role_value']['field'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_role_value']['expose']['operator_id'] = 'field_person_role_value_op';
  $handler->display->display_options['filters']['field_person_role_value']['expose']['label'] = 'Role(s)';
  $handler->display->display_options['filters']['field_person_role_value']['expose']['operator'] = 'field_person_role_value_op';
  $handler->display->display_options['filters']['field_person_role_value']['expose']['identifier'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_person_role_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'people/searchByRole';

  /* Display: By Org */
  $handler = $view->new_display('page', 'By Org', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Luquillo Personnel by their Affiliation';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
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
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_person_role']['id'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['fields']['field_person_role']['field'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['element_label_colon'] = FALSE;
  /* Field: Content: LUQ LTER Status */
  $handler->display->display_options['fields']['field_person_status']['id'] = 'field_person_status';
  $handler->display->display_options['fields']['field_person_status']['table'] = 'field_data_field_person_status';
  $handler->display->display_options['fields']['field_person_status']['field'] = 'field_person_status';
  $handler->display->display_options['fields']['field_person_status']['element_label_colon'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: LUQ LTER Status (field_person_status) */
  $handler->display->display_options['sorts']['field_person_status_value']['id'] = 'field_person_status_value';
  $handler->display->display_options['sorts']['field_person_status_value']['table'] = 'field_data_field_person_status';
  $handler->display->display_options['sorts']['field_person_status_value']['field'] = 'field_person_status_value';
  $handler->display->display_options['sorts']['field_person_status_value']['order'] = 'DESC';
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
  /* Filter criterion: Content: Name (field_name:family) */
  $handler->display->display_options['filters']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_family']['expose']['operator_id'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['label'] = 'Last Name';
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
  /* Filter criterion: Content: Organization (field_organization) */
  $handler->display->display_options['filters']['field_organization_target_id']['id'] = 'field_organization_target_id';
  $handler->display->display_options['filters']['field_organization_target_id']['table'] = 'field_data_field_organization';
  $handler->display->display_options['filters']['field_organization_target_id']['field'] = 'field_organization_target_id';
  $handler->display->display_options['filters']['field_organization_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['operator_id'] = 'field_organization_target_id_op';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['operator'] = 'field_organization_target_id_op';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['identifier'] = 'field_organization_target_id';
  $handler->display->display_options['filters']['field_organization_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'people/searchByOrganization';

  /* Display: People Datasets */
  $handler = $view->new_display('page', 'People Datasets', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Personnel and Data Sets';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_creator_target_id']['id'] = 'field_person_creator_target_id';
  $handler->display->display_options['relationships']['field_person_creator_target_id']['table'] = 'field_data_field_person_creator';
  $handler->display->display_options['relationships']['field_person_creator_target_id']['field'] = 'field_person_creator_target_id';
  $handler->display->display_options['relationships']['field_person_creator_target_id']['label'] = 'Content referenced from DS person_creator';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_person_creator_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Data Set Title';
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
  /* Filter criterion: Content: Name (field_name:family) */
  $handler->display->display_options['filters']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_family']['expose']['operator_id'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['label'] = 'Last Name ';
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
  /* Filter criterion: Content: Role (field_person_role) */
  $handler->display->display_options['filters']['field_person_role_value']['id'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['filters']['field_person_role_value']['field'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['value'] = array(
    'LUQIN' => 'LUQIN',
  );
  $handler->display->display_options['path'] = 'people/datasets';

  /* Display: Researcher Last Name */
  $handler = $view->new_display('page', 'Researcher Last Name', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Luquillo Researchers by Last Name';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_projects_node']['id'] = 'reverse_field_related_projects_node';
  $handler->display->display_options['relationships']['reverse_field_related_projects_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_projects_node']['field'] = 'reverse_field_related_projects_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
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
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_related_projects_node';
  $handler->display->display_options['fields']['title']['label'] = 'Projects';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
  /* Filter criterion: Content: Name (field_name:family) */
  $handler->display->display_options['filters']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_family']['expose']['operator_id'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['label'] = 'Last Name';
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
  /* Filter criterion: Content: Role (field_person_role) */
  $handler->display->display_options['filters']['field_person_role_value']['id'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['filters']['field_person_role_value']['field'] = 'field_person_role_value';
  $handler->display->display_options['filters']['field_person_role_value']['value'] = array(
    'LUQIN' => 'LUQIN',
  );
  $handler->display->display_options['path'] = 'people/researchers';

  /* Display: Students */
  $handler = $view->new_display('page', 'Students', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Luquillo Students';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['click_sort_column'] = 'title';
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
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_person_role']['id'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['table'] = 'field_data_field_person_role';
  $handler->display->display_options['fields']['field_person_role']['field'] = 'field_person_role';
  $handler->display->display_options['fields']['field_person_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Name (field_name:family) */
  $handler->display->display_options['sorts']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['sorts']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_family']['field'] = 'field_name_family';
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
  /* Filter criterion: Content: Name (field_name:family) */
  $handler->display->display_options['filters']['field_name_family']['id'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_family']['field'] = 'field_name_family';
  $handler->display->display_options['filters']['field_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_family']['expose']['operator_id'] = 'field_name_family_op';
  $handler->display->display_options['filters']['field_name_family']['expose']['label'] = 'Last Name';
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
  /* Filter criterion: Content: LUQ Student? (field_person_student) */
  $handler->display->display_options['filters']['field_person_student_value']['id'] = 'field_person_student_value';
  $handler->display->display_options['filters']['field_person_student_value']['table'] = 'field_data_field_person_student';
  $handler->display->display_options['filters']['field_person_student_value']['field'] = 'field_person_student_value';
  $handler->display->display_options['filters']['field_person_student_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'people/students';
  $export['personnel_luq_5'] = $view;

  return $export;
}
