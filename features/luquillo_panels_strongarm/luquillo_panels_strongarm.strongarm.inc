<?php
/**
 * @file
 * luquillo_panels_strongarm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function luquillo_panels_strongarm_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '0';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_edit_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_node_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_node_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_node";s:23:"allowed_layout_settings";a:26:{s:8:"flexible";b:1;s:20:"flexible:aboutlayout";b:1;s:17:"flexible:datasets";b:1;s:18:"flexible:data_sets";b:1;s:13:"twocol_bricks";b:1;s:17:"threecol_25_50_25";b:1;s:6:"twocol";b:1;s:6:"onecol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:14:"twocol_stacked";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:10:"three_3x33";b:1;s:3:"one";b:1;s:9:"two_brick";b:1;s:14:"three_25_25_50";b:1;s:8:"six_6x16";b:1;s:6:"two_50";b:1;s:9:"two_66_33";b:1;s:9:"four_4x25";b:1;s:14:"three_25_50_25";b:1;s:17:"three_inset_right";b:1;s:9:"five_5x20";b:1;s:14:"three_50_25_25";b:1;s:9:"two_33_66";b:1;s:16:"three_inset_left";b:1;}s:10:"form_state";N;}';
  $export['panels_node_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_node_default';
  $strongarm->value = array(
    'token' => 'token',
    'custom' => 'custom',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'block' => 'block',
    'entity_form_field' => 'entity_form_field',
    'entity_view' => 'entity_view',
    'menu_tree' => 'menu_tree',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panels_node_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_renderer_default';
  $strongarm->value = 'ipe';
  $export['panels_renderer_default'] = $strongarm;

  return $export;
}
