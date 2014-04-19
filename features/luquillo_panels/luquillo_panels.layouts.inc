<?php
/**
 * @file
 * luquillo_panels.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function luquillo_panels_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'aboutlayout';
  $layout->admin_title = 'aboutlayout';
  $layout->admin_description = '';
  $layout->category = 'panes';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'aboutsummary',
          1 => 'anboutlternetwork',
        ),
        'parent' => 'main',
      ),
      'aboutsummary' => array(
        'type' => 'region',
        'title' => 'aboutsummary',
        'width' => '51.70541950119741',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'anboutlternetwork' => array(
        'type' => 'region',
        'title' => 'OtherContent',
        'width' => '14.503702982544906',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['aboutlayout'] = $layout;

  return $export;
}
