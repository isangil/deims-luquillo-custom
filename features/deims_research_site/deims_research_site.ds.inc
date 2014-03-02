<?php
/**
 * @file
 * deims_research_site.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_research_site_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_site|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_site';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_res_site_official_title',
        1 => 'field_elevation',
        2 => 'field_res_site_area',
        3 => 'field_coordinates',
        4 => 'field_site_details',
        5 => 'field_res_site_program_ter',
        6 => 'field_core_areas',
        7 => 'field_res_site_datum',
        8 => 'field_res_site_isareaflag',
        9 => 'field_site_id',
      ),
      'right' => array(
        10 => 'field_images',
        11 => 'field_description',
        12 => 'field_res_site_other_title',
        13 => 'field_res_site_title',
      ),
    ),
    'fields' => array(
      'field_res_site_official_title' => 'left',
      'field_elevation' => 'left',
      'field_res_site_area' => 'left',
      'field_coordinates' => 'left',
      'field_site_details' => 'left',
      'field_res_site_program_ter' => 'left',
      'field_core_areas' => 'left',
      'field_res_site_datum' => 'left',
      'field_res_site_isareaflag' => 'left',
      'field_site_id' => 'left',
      'field_images' => 'right',
      'field_description' => 'right',
      'field_res_site_other_title' => 'right',
      'field_res_site_title' => 'right',
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
  $export['node|research_site|full'] = $ds_layout;

  return $export;
}
