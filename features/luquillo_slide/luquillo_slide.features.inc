<?php
/**
 * @file
 * luquillo_slide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luquillo_slide_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function luquillo_slide_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function luquillo_slide_image_default_styles() {
  $styles = array();

  // Exported image style: flex-slider-1280x330.
  $styles['flex-slider-1280x330'] = array(
    'name' => 'flex-slider-1280x330',
    'label' => 'Flex-Slider-1280x330',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1280',
          'height' => '330',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function luquillo_slide_node_info() {
  $items = array(
    'slides' => array(
      'name' => t('Slides'),
      'base' => 'node_content',
      'description' => t('Slides for the slide show.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
