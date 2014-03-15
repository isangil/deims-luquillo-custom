<?php
/**
 * @file
 * deims_article.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|article_key_finding_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'article_key_finding_list';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'field_files',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_files' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|article|article_key_finding_list'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function deims_article_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'article_key_finding_list';
  $ds_view_mode->label = 'article-key-finding-list';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['article_key_finding_list'] = $ds_view_mode;

  return $export;
}
