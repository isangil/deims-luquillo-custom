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
  $strongarm->name = 'additional_settings__active_tab_panel';
  $strongarm->value = 'edit-custom-breadcrumbs';
  $export['additional_settings__active_tab_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_panel';
  $strongarm->value = 0;
  $export['autosave_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_panel';
  $strongarm->value = '0';
  $export['auto_entitylabel_node_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_panel';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_panel';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_panel';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_show_form_table_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_panel';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_panel';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_panel';
  $strongarm->value = 'teaser';
  $export['diff_view_mode_preview_node_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__panel';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_panel';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_panel';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_panel';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_panel';
  $strongarm->value = '1';
  $export['node_preview_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_panel';
  $strongarm->value = 0;
  $export['node_submitted_panel'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_comment_panel';
  $strongarm->value = 0;
  $export['print_html_display_comment_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_panel';
  $strongarm->value = 0;
  $export['print_html_display_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_urllist_panel';
  $strongarm->value = 0;
  $export['print_html_display_urllist_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_panel';
  $strongarm->value = 1;
  $export['workbench_access_node_type_panel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_panel';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_panel'] = $strongarm;

  return $export;
}
