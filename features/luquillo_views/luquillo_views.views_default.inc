<?php
/**
 * @file
 * luquillo_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luquillo_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'maps_of_area_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Maps of Area Sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maps of Area Sites';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_coordinates';
  $handler->display->display_options['style_options']['popup_source'] = 'title_1';
  $handler->display->display_options['style_options']['geofield_map_maptype'] = 'hybrid';
  $handler->display->display_options['style_options']['geofield_map_baselayers_physical'] = 1;
  $handler->display->display_options['style_options']['geofield_map_scale'] = 1;
  $handler->display->display_options['style_options']['geofield_map_scrollwheel'] = 1;
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_sites_node']['id'] = 'reverse_field_related_sites_node';
  $handler->display->display_options['relationships']['reverse_field_related_sites_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_sites_node']['field'] = 'reverse_field_related_sites_node';
  $handler->display->display_options['relationships']['reverse_field_related_sites_node']['label'] = 'dataset-sites';
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_coordinates']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_related_sites_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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
    'research_site' => 'research_site',
  );
  /* Filter criterion: Content: Coordinates (field_coordinates:lat) */
  $handler->display->display_options['filters']['field_coordinates_lat']['id'] = 'field_coordinates_lat';
  $handler->display->display_options['filters']['field_coordinates_lat']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['filters']['field_coordinates_lat']['field'] = 'field_coordinates_lat';
  $handler->display->display_options['filters']['field_coordinates_lat']['operator'] = 'between';
  $handler->display->display_options['filters']['field_coordinates_lat']['value']['min'] = '17';
  $handler->display->display_options['filters']['field_coordinates_lat']['value']['max'] = '19';
  /* Filter criterion: Content: Coordinates (field_coordinates:lon) */
  $handler->display->display_options['filters']['field_coordinates_lon']['id'] = 'field_coordinates_lon';
  $handler->display->display_options['filters']['field_coordinates_lon']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['filters']['field_coordinates_lon']['field'] = 'field_coordinates_lon';
  $handler->display->display_options['filters']['field_coordinates_lon']['operator'] = 'between';
  $handler->display->display_options['filters']['field_coordinates_lon']['value']['min'] = '-75';
  $handler->display->display_options['filters']['field_coordinates_lon']['value']['max'] = '-60';
  /* Filter criterion: Content: Is Area? (field_res_site_isareaflag) */
  $handler->display->display_options['filters']['field_res_site_isareaflag_value']['id'] = 'field_res_site_isareaflag_value';
  $handler->display->display_options['filters']['field_res_site_isareaflag_value']['table'] = 'field_data_field_res_site_isareaflag';
  $handler->display->display_options['filters']['field_res_site_isareaflag_value']['field'] = 'field_res_site_isareaflag_value';
  $handler->display->display_options['filters']['field_res_site_isareaflag_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'maps-of-areas';
  $export['maps_of_area_sites'] = $view;

  $view = new view();
  $view->name = 'news_and_events';
  $view->description = 'News and Event tagged Articles, formerly classified as Blogs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News and Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News and Events';
  $handler->display->display_options['css_class'] = 'main_style';
  $handler->display->display_options['hide_attachment_summary'] = TRUE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1327 => '1327',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'news-and-events';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'newsblock');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'News and Events';
  $export['news_and_events'] = $view;

  return $export;
}
