<?php
/**
 * @file
 * luquillo_panels.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function luquillo_panels_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'blank_square';
  $content->admin_title = 'Blank square';
  $content->admin_description = '';
  $content->category = 'panes';
  $content->settings = array(
    'admin_title' => 'Blank square',
    'title' => '',
    'body' => '<p>&nbsp;</p>
<p>&nbsp;</p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['blank_square'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'link_list';
  $content->admin_title = 'studysiteslink';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'studysiteslink',
    'title' => 'Study Sites',
    'body' => '<p><a href="http://luq2.lternet.edu/about/sites">List</a></p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['link_list'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'main_menu_pages_panes';
  $content->admin_title = 'main_menu_pages_panes';
  $content->admin_description = 'Panels to be displayed on the Main Menu Items\' pages';
  $content->category = 'mainpage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Main Menu Pages Pane',
    'body' => 'Main Menu Pages Pane',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['main_menu_pages_panes'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'nodelinkforbasicpage';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = 'page';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="http://luq2.lternet.edu/environmental-settings">Setting</a></p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['nodelinkforbasicpage'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'site_mission';
  $content->admin_title = 'mission statement';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'mission statement',
    'title' => '',
    'body' => '<p>Explore spatio-temporal variation in ecosystem structure and function in dynamic tropical landscapes</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['site_mission'] = $content;

  return $export;
}
