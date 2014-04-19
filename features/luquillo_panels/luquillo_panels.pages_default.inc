<?php
/**
 * @file
 * luquillo_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function luquillo_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_panel';
  $page->task = 'page';
  $page->admin_title = 'Home Panel';
  $page->admin_description = 'Panel to display Home [age';
  $page->path = 'luq2';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'HOME',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '#data_style {
 background-color: #ffffff;
 border: 1px solid #ccc;
 padding: 0.5em;
 border-bottom-left-radius: 11px;
 border-bottom-right-radius: 11px;
 border-top-left-radius: 11px;
 border-top-right-radius: 11px;
 margin: 0.1em 0;',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_inset_left';
  $display->layout_settings = array(
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'main_region',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'main_region' => array(
        'type' => 'region',
        'title' => 'Main region',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'slideshow',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'slideshow' => array(
        'type' => 'region',
        'title' => 'slideshow',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main_region' => NULL,
      'center' => NULL,
      'slideshow' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '14e6f98b-41bb-422f-8d27-9c62646f06d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-300b1ae1-be01-4cea-8006-cad2695be4d5';
    $pane->panel = 'three_inset_left_middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3654',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '300b1ae1-be01-4cea-8006-cad2695be4d5';
    $display->content['new-300b1ae1-be01-4cea-8006-cad2695be4d5'] = $pane;
    $display->panels['three_inset_left_middle'][0] = 'new-300b1ae1-be01-4cea-8006-cad2695be4d5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_panel'] = $page;

  return $pages;

}
