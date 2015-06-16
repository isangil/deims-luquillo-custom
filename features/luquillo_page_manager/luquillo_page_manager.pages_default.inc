<?php
/**
 * @file
 * luquillo_page_manager.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function luquillo_page_manager_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Data Sets Details',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'data_set' => 'data_set',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => ' group-summary field-group-fieldset',
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'right' => NULL,
      'top_middle_for_data_sources' => NULL,
      'leftbottom' => array(),
      'rightbottom' => NULL,
      'center' => NULL,
      'keywords' => NULL,
      'leftbottom_' => NULL,
      'top_center' => NULL,
      'left' => NULL,
      'all_metadata' => NULL,
      'variables' => NULL,
      'two_50_top' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'two_50_first' => NULL,
      'one_main' => NULL,
    ),
    'left' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'center' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'keywords' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'top_center' => array(
      'style' => 'default',
    ),
    'leftbottom_' => array(
      'style' => 'default',
    ),
    'style' => 'stylizer',
    'leftbottom' => array(
      'style' => 'stylizer',
    ),
    'all_metadata' => array(
      'style' => 'default',
    ),
    'two_50_top' => array(
      'style' => 'stylizer:panelandpanerounded',
    ),
    'two_50_second' => array(
      'style' => 'stylizer:panelandpanerounded',
    ),
    'two_50_bottom' => array(
      'style' => 'stylizer:panelandpanerounded',
    ),
  );
  $display->cache = array();
  $display->title = 'Data Set Metadata and Data';
  $display->uuid = '022016d3-8c52-4475-8bb2-86e25cf13872';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65b5224c-4b2b-48cf-a31a-3177f6c64999';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65b5224c-4b2b-48cf-a31a-3177f6c64999';
    $display->content['new-65b5224c-4b2b-48cf-a31a-3177f6c64999'] = $pane;
    $display->panels['one_main'][0] = 'new-65b5224c-4b2b-48cf-a31a-3177f6c64999';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Data Source Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'data_source' => 'data_source',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'stylizer:main_pages_style',
    ),
    'middle' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'stylizer:main_pages_style',
    ),
    'style' => 'stylizer:pointfivepaddingroundcorners',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c2d90e9-5be0-4fb8-b4d5-57c91feb8460';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b24872c-df2e-46e1-9b3e-838bea0b073e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_data_source_file';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'or',
    );
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_url_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'text' => '[file:basename]',
        'link' => '[file:url]',
        'check_access' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b24872c-df2e-46e1-9b3e-838bea0b073e';
    $display->content['new-7b24872c-df2e-46e1-9b3e-838bea0b073e'] = $pane;
    $display->panels['middle'][0] = 'new-7b24872c-df2e-46e1-9b3e-838bea0b073e';
    $pane = new stdClass();
    $pane->pid = 'new-496245bf-aab5-480d-830e-2e954a0d2a36';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '496245bf-aab5-480d-830e-2e954a0d2a36';
    $display->content['new-496245bf-aab5-480d-830e-2e954a0d2a36'] = $pane;
    $display->panels['middle'][1] = 'new-496245bf-aab5-480d-830e-2e954a0d2a36';
    $pane = new stdClass();
    $pane->pid = 'new-1a54e37f-4766-4c19-b025-e2f3821639b6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_sets-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1a54e37f-4766-4c19-b025-e2f3821639b6';
    $display->content['new-1a54e37f-4766-4c19-b025-e2f3821639b6'] = $pane;
    $display->panels['middle'][2] = 'new-1a54e37f-4766-4c19-b025-e2f3821639b6';
    $pane = new stdClass();
    $pane->pid = 'new-a5a7d63e-e304-4ab4-a5f8-e08b1b29281d';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'data_sources_by_data_sets';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '15',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '%0',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a5a7d63e-e304-4ab4-a5f8-e08b1b29281d';
    $display->content['new-a5a7d63e-e304-4ab4-a5f8-e08b1b29281d'] = $pane;
    $display->panels['middle'][3] = 'new-a5a7d63e-e304-4ab4-a5f8-e08b1b29281d';
    $pane = new stdClass();
    $pane->pid = 'new-01986be6-7036-42f8-b3aa-e192e2f6f721';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '01986be6-7036-42f8-b3aa-e192e2f6f721';
    $display->content['new-01986be6-7036-42f8-b3aa-e192e2f6f721'] = $pane;
    $display->panels['middle'][4] = 'new-01986be6-7036-42f8-b3aa-e192e2f6f721';
    $pane = new stdClass();
    $pane->pid = 'new-6c28ceb8-4315-4779-8774-7bf8ef8001b8';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date_range';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'bdp_yeardate',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6c28ceb8-4315-4779-8774-7bf8ef8001b8';
    $display->content['new-6c28ceb8-4315-4779-8774-7bf8ef8001b8'] = $pane;
    $display->panels['middle'][5] = 'new-6c28ceb8-4315-4779-8774-7bf8ef8001b8';
    $pane = new stdClass();
    $pane->pid = 'new-314a17cd-9345-42ae-aa4c-5e9278367e68';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:field_data_sources';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '314a17cd-9345-42ae-aa4c-5e9278367e68';
    $display->content['new-314a17cd-9345-42ae-aa4c-5e9278367e68'] = $pane;
    $display->panels['middle'][6] = 'new-314a17cd-9345-42ae-aa4c-5e9278367e68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01986be6-7036-42f8-b3aa-e192e2f6f721';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Research Sites Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'research_site' => 'research_site',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b4862474-3482-4a5a-a4cf-9e632811705e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3cfc740-662a-45ba-b06e-389d276566e6';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3cfc740-662a-45ba-b06e-389d276566e6';
    $display->content['new-c3cfc740-662a-45ba-b06e-389d276566e6'] = $pane;
    $display->panels['left'][0] = 'new-c3cfc740-662a-45ba-b06e-389d276566e6';
    $pane = new stdClass();
    $pane->pid = 'new-f0a2dc2f-8680-4425-aea3-4b8d62bc1727';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_coordinates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'geofield_latlon',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'format' => 'decimal_degrees',
        'labels' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f0a2dc2f-8680-4425-aea3-4b8d62bc1727';
    $display->content['new-f0a2dc2f-8680-4425-aea3-4b8d62bc1727'] = $pane;
    $display->panels['left'][1] = 'new-f0a2dc2f-8680-4425-aea3-4b8d62bc1727';
    $pane = new stdClass();
    $pane->pid = 'new-117f30dc-3a00-4a12-a07d-d5e4047a6435';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_elevation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '117f30dc-3a00-4a12-a07d-d5e4047a6435';
    $display->content['new-117f30dc-3a00-4a12-a07d-d5e4047a6435'] = $pane;
    $display->panels['left'][2] = 'new-117f30dc-3a00-4a12-a07d-d5e4047a6435';
    $pane = new stdClass();
    $pane->pid = 'new-46738e2d-c114-4cec-b372-cd1c9e716fe2';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_res_site_area';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'select_or_other_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '46738e2d-c114-4cec-b372-cd1c9e716fe2';
    $display->content['new-46738e2d-c114-4cec-b372-cd1c9e716fe2'] = $pane;
    $display->panels['left'][3] = 'new-46738e2d-c114-4cec-b372-cd1c9e716fe2';
    $pane = new stdClass();
    $pane->pid = 'new-939d0f17-965c-47f1-a1b5-e3d405cc1445';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => 'file',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '939d0f17-965c-47f1-a1b5-e3d405cc1445';
    $display->content['new-939d0f17-965c-47f1-a1b5-e3d405cc1445'] = $pane;
    $display->panels['right'][0] = 'new-939d0f17-965c-47f1-a1b5-e3d405cc1445';
    $pane = new stdClass();
    $pane->pid = 'new-3b11730e-2c36-4927-9b1d-5bf5e97d661b';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_coordinates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'geofield_map_map',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'geofield_map_width' => '100%',
        'geofield_map_height' => '300px',
        'geofield_map_zoom' => '8',
        'geofield_map_controltype' => 'default',
        'geofield_map_mtc' => 'standard',
        'geofield_map_pancontrol' => 1,
        'geofield_map_maptype' => 'physical',
        'geofield_map_baselayers_map' => 1,
        'geofield_map_baselayers_satellite' => 1,
        'geofield_map_baselayers_hybrid' => 1,
        'geofield_map_baselayers_physical' => 1,
        'geofield_map_scale' => 0,
        'geofield_map_overview' => 0,
        'geofield_map_overview_opened' => 0,
        'geofield_map_scrollwheel' => 0,
        'geofield_map_draggable' => 0,
        'geofield_map_streetview_show' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3b11730e-2c36-4927-9b1d-5bf5e97d661b';
    $display->content['new-3b11730e-2c36-4927-9b1d-5bf5e97d661b'] = $pane;
    $display->panels['right'][1] = 'new-3b11730e-2c36-4927-9b1d-5bf5e97d661b';
    $pane = new stdClass();
    $pane->pid = 'new-12d4577f-5645-4bb3-8b21-f29c7b067553';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_res_site_official_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12d4577f-5645-4bb3-8b21-f29c7b067553';
    $display->content['new-12d4577f-5645-4bb3-8b21-f29c7b067553'] = $pane;
    $display->panels['top'][0] = 'new-12d4577f-5645-4bb3-8b21-f29c7b067553';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-12d4577f-5645-4bb3-8b21-f29c7b067553';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Research Project Pane;',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
          0 => 'title__people',
        ),
        'parent' => 'main',
      ),
      'title__people' => array(
        'type' => 'region',
        'title' => 'Title, People',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'identifiers_abstract_and_method',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'identifiers_abstract_and_method' => array(
        'type' => 'region',
        'title' => 'Identifiers abstract and method',
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
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'title__people' => NULL,
      'identifiers_abstract_and_method' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '38989d63-7104-4fde-b948-e8419a3bfc21';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b328b777-5bf2-4f1e-add4-e793ef02efea';
    $pane->panel = 'identifiers_abstract_and_method';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b328b777-5bf2-4f1e-add4-e793ef02efea';
    $display->content['new-b328b777-5bf2-4f1e-add4-e793ef02efea'] = $pane;
    $display->panels['identifiers_abstract_and_method'][0] = 'new-b328b777-5bf2-4f1e-add4-e793ef02efea';
    $pane = new stdClass();
    $pane->pid = 'new-c90f09f9-3793-40ab-9736-08181305149e';
    $pane->panel = 'identifiers_abstract_and_method';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'flexslider_full',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c90f09f9-3793-40ab-9736-08181305149e';
    $display->content['new-c90f09f9-3793-40ab-9736-08181305149e'] = $pane;
    $display->panels['identifiers_abstract_and_method'][1] = 'new-c90f09f9-3793-40ab-9736-08181305149e';
    $pane = new stdClass();
    $pane->pid = 'new-c6dca313-559f-401f-a88f-30a1f2ec8c20';
    $pane->panel = 'identifiers_abstract_and_method';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_abstract';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c6dca313-559f-401f-a88f-30a1f2ec8c20';
    $display->content['new-c6dca313-559f-401f-a88f-30a1f2ec8c20'] = $pane;
    $display->panels['identifiers_abstract_and_method'][2] = 'new-c6dca313-559f-401f-a88f-30a1f2ec8c20';
    $pane = new stdClass();
    $pane->pid = 'new-ed464be6-b4c1-4458-bf81-3c12ebc8c06e';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'token_formatters_entity_reference',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => '[entity:url]',
        'text' => '[entity:label]',
        'check_access' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed464be6-b4c1-4458-bf81-3c12ebc8c06e';
    $display->content['new-ed464be6-b4c1-4458-bf81-3c12ebc8c06e'] = $pane;
    $display->panels['title__people'][0] = 'new-ed464be6-b4c1-4458-bf81-3c12ebc8c06e';
    $pane = new stdClass();
    $pane->pid = 'new-0e5066ef-6213-41ad-9887-dcdee2c6e801';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_director';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'token_formatters_entity_reference',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => '[entity:url]',
        'text' => '[entity:label]',
        'check_access' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e5066ef-6213-41ad-9887-dcdee2c6e801';
    $display->content['new-0e5066ef-6213-41ad-9887-dcdee2c6e801'] = $pane;
    $display->panels['title__people'][1] = 'new-0e5066ef-6213-41ad-9887-dcdee2c6e801';
    $pane = new stdClass();
    $pane->pid = 'new-ad9e7197-b299-45b0-a18d-ec58ca9f1b80';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_scientist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'token_formatters_entity_reference',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => '[entity:url]',
        'text' => '[entity:label]',
        'check_access' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ad9e7197-b299-45b0-a18d-ec58ca9f1b80';
    $display->content['new-ad9e7197-b299-45b0-a18d-ec58ca9f1b80'] = $pane;
    $display->panels['title__people'][2] = 'new-ad9e7197-b299-45b0-a18d-ec58ca9f1b80';
    $pane = new stdClass();
    $pane->pid = 'new-2dce6df5-a412-4ff9-8a05-c3da48283096';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_data_sets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2dce6df5-a412-4ff9-8a05-c3da48283096';
    $display->content['new-2dce6df5-a412-4ff9-8a05-c3da48283096'] = $pane;
    $display->panels['title__people'][3] = 'new-2dce6df5-a412-4ff9-8a05-c3da48283096';
    $pane = new stdClass();
    $pane->pid = 'new-c4653e3f-32c0-4a12-aa2d-cba09a4e5ff4';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Projects',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c4653e3f-32c0-4a12-aa2d-cba09a4e5ff4';
    $display->content['new-c4653e3f-32c0-4a12-aa2d-cba09a4e5ff4'] = $pane;
    $display->panels['title__people'][4] = 'new-c4653e3f-32c0-4a12-aa2d-cba09a4e5ff4';
    $pane = new stdClass();
    $pane->pid = 'new-991743f9-6e94-4fbd-9447-90a6a0ef7197';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '600',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Funding Source',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '991743f9-6e94-4fbd-9447-90a6a0ef7197';
    $display->content['new-991743f9-6e94-4fbd-9447-90a6a0ef7197'] = $pane;
    $display->panels['title__people'][5] = 'new-991743f9-6e94-4fbd-9447-90a6a0ef7197';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b328b777-5bf2-4f1e-add4-e793ef02efea';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'People Panels',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'person' => 'person',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottomregion',
          1 => 'bottomrightregion',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottomregion' => array(
        'type' => 'region',
        'title' => 'BottomRegion',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'bottomrightregion' => array(
        'type' => 'region',
        'title' => 'BottomRightRegion',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'bottomregion' => NULL,
      'bottomrightregion' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f1d7efc3-4bc1-43a1-af45-c92b600bfb4c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4b654d4f-4e55-4056-9b06-67a31099f119';
    $pane->panel = 'bottomregion';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b654d4f-4e55-4056-9b06-67a31099f119';
    $display->content['new-4b654d4f-4e55-4056-9b06-67a31099f119'] = $pane;
    $display->panels['bottomregion'][0] = 'new-4b654d4f-4e55-4056-9b06-67a31099f119';
    $pane = new stdClass();
    $pane->pid = 'new-201a69d3-e360-456e-a283-ac19f43c6824';
    $pane->panel = 'bottomrightregion';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'telephone_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '201a69d3-e360-456e-a283-ac19f43c6824';
    $display->content['new-201a69d3-e360-456e-a283-ac19f43c6824'] = $pane;
    $display->panels['bottomrightregion'][0] = 'new-201a69d3-e360-456e-a283-ac19f43c6824';
    $pane = new stdClass();
    $pane->pid = 'new-1cba2e6e-079c-489f-8dc4-d313e11ea181';
    $pane->panel = 'bottomrightregion';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_fax';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'telephone_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1cba2e6e-079c-489f-8dc4-d313e11ea181';
    $display->content['new-1cba2e6e-079c-489f-8dc4-d313e11ea181'] = $pane;
    $display->panels['bottomrightregion'][1] = 'new-1cba2e6e-079c-489f-8dc4-d313e11ea181';
    $pane = new stdClass();
    $pane->pid = 'new-8ed85d23-3292-4691-a22b-2328d7175074';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'select_or_other_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ed85d23-3292-4691-a22b-2328d7175074';
    $display->content['new-8ed85d23-3292-4691-a22b-2328d7175074'] = $pane;
    $display->panels['center'][0] = 'new-8ed85d23-3292-4691-a22b-2328d7175074';
    $pane = new stdClass();
    $pane->pid = 'new-8a5e0262-d063-4b33-a476-601c64b41538';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a5e0262-d063-4b33-a476-601c64b41538';
    $display->content['new-8a5e0262-d063-4b33-a476-601c64b41538'] = $pane;
    $display->panels['center'][1] = 'new-8a5e0262-d063-4b33-a476-601c64b41538';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8ed85d23-3292-4691-a22b-2328d7175074';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'test without pop blocker',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'biblio' => 'biblio',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '11c02c8d-9693-4032-bfb2-3cad937d1074';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6e67cf71-9360-4a8a-89aa-46380bfeaeba';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e67cf71-9360-4a8a-89aa-46380bfeaeba';
    $display->content['new-6e67cf71-9360-4a8a-89aa-46380bfeaeba'] = $pane;
    $display->panels['middle'][0] = 'new-6e67cf71-9360-4a8a-89aa-46380bfeaeba';
    $pane = new stdClass();
    $pane->pid = 'new-ee4b5a50-a421-4f07-8bf6-3d83cd39e7d9';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ee4b5a50-a421-4f07-8bf6-3d83cd39e7d9';
    $display->content['new-ee4b5a50-a421-4f07-8bf6-3d83cd39e7d9'] = $pane;
    $display->panels['middle'][1] = 'new-ee4b5a50-a421-4f07-8bf6-3d83cd39e7d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6e67cf71-9360-4a8a-89aa-46380bfeaeba';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Data Sets Details 2',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'data_set' => 'data_set',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
        'class' => ' group-summary field-group-fieldset',
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
        'width' => '38.20752975265626',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'anboutlternetwork' => array(
        'type' => 'region',
        'title' => 'OtherContent',
        'width' => '28.00159273108606',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_region_for_title',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top_region_for_title' => array(
        'type' => 'region',
        'title' => 'Data Set Identifiers',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'right' => NULL,
      'top_middle_for_data_sources' => NULL,
      'leftbottom' => array(),
      'rightbottom' => NULL,
      'center' => NULL,
      'keywords' => NULL,
      'leftbottom_' => NULL,
      'top_center' => NULL,
      'left' => NULL,
      'all_metadata' => NULL,
      'variables' => NULL,
      'two_50_top' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'two_50_first' => NULL,
      'one_main' => NULL,
      'aboutsummary' => NULL,
      'anboutlternetwork' => NULL,
      'content' => NULL,
      'top_region_for_title' => NULL,
    ),
    'left' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'center' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'keywords' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'top_center' => array(
      'style' => 'default',
    ),
    'leftbottom_' => array(
      'style' => 'default',
    ),
    'style' => 'stylizer',
    'leftbottom' => array(
      'style' => 'stylizer',
    ),
    'all_metadata' => array(
      'style' => 'default',
    ),
    'two_50_top' => array(
      'style' => 'stylizer:panelandpanerounded',
    ),
    'two_50_second' => array(
      'style' => 'stylizer:panelandpanerounded',
    ),
    'two_50_bottom' => array(
      'style' => 'stylizer:panelandpanerounded',
    ),
  );
  $display->cache = array();
  $display->title = 'Data Set Metadata and Data';
  $display->uuid = '022016d3-8c52-4475-8bb2-86e25cf13872';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7862bde-69ef-4f2c-ab5b-0e08d5b5c5f8';
    $pane->panel = 'aboutsummary';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dataset_duration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'select_or_other_formatter',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Duration',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c7862bde-69ef-4f2c-ab5b-0e08d5b5c5f8';
    $display->content['new-c7862bde-69ef-4f2c-ab5b-0e08d5b5c5f8'] = $pane;
    $display->panels['aboutsummary'][0] = 'new-c7862bde-69ef-4f2c-ab5b-0e08d5b5c5f8';
    $pane = new stdClass();
    $pane->pid = 'new-a9e77ddc-aa3c-44aa-99e9-fe28ad57e25d';
    $pane->panel = 'anboutlternetwork';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dataset_program';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'token_formatters_term_reference',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'text' => '[term:name]',
        'link' => 'taxonomy/term/[term:tid]',
        'check_access' => TRUE,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9e77ddc-aa3c-44aa-99e9-fe28ad57e25d';
    $display->content['new-a9e77ddc-aa3c-44aa-99e9-fe28ad57e25d'] = $pane;
    $display->panels['anboutlternetwork'][0] = 'new-a9e77ddc-aa3c-44aa-99e9-fe28ad57e25d';
    $pane = new stdClass();
    $pane->pid = 'new-adade2af-0e1e-4494-b4d4-419e31c324e9';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'data_sources_by_data_sets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'adade2af-0e1e-4494-b4d4-419e31c324e9';
    $display->content['new-adade2af-0e1e-4494-b4d4-419e31c324e9'] = $pane;
    $display->panels['content'][0] = 'new-adade2af-0e1e-4494-b4d4-419e31c324e9';
    $pane = new stdClass();
    $pane->pid = 'new-9bd13eb3-7142-405b-bd19-3523faee58d1';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'block',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9bd13eb3-7142-405b-bd19-3523faee58d1';
    $display->content['new-9bd13eb3-7142-405b-bd19-3523faee58d1'] = $pane;
    $display->panels['content'][1] = 'new-9bd13eb3-7142-405b-bd19-3523faee58d1';
    $pane = new stdClass();
    $pane->pid = 'new-87c962c5-45df-4ad5-9099-b9f2df895b14';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_eml_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'token_field_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'EML Link:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '87c962c5-45df-4ad5-9099-b9f2df895b14';
    $display->content['new-87c962c5-45df-4ad5-9099-b9f2df895b14'] = $pane;
    $display->panels['content'][2] = 'new-87c962c5-45df-4ad5-9099-b9f2df895b14';
    $pane = new stdClass();
    $pane->pid = 'new-e9305747-7b29-4a3a-9e10-72c3f0c61553';
    $pane->panel = 'top_region_for_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e9305747-7b29-4a3a-9e10-72c3f0c61553';
    $display->content['new-e9305747-7b29-4a3a-9e10-72c3f0c61553'] = $pane;
    $display->panels['top_region_for_title'][0] = 'new-e9305747-7b29-4a3a-9e10-72c3f0c61553';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function luquillo_page_manager_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_set_panel_page';
  $page->task = 'page';
  $page->admin_title = 'data set panel page';
  $page->admin_description = 'data set panel page';
  $page->path = 'data/%nid';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_set_panel_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'data_set_panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Data Sets Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_node_add_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Metadata and Data File';
  $display->uuid = '2a338f79-6fe0-4a29-b949-e93d33770bf5';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_set_panel_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'data_set_panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Research Sites Panels',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1403a0b2-5bfb-4eda-bcaa-ab484581184e';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_set_panel_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_sets_search_page';
  $page->task = 'page';
  $page->admin_title = 'Data Sets Search Page';
  $page->admin_description = 'Data Sets Search Page';
  $page->path = 'luqdata2';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_sets_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'data_sets_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Data Sets Search Page';
  $display->uuid = 'dc8a0101-1ced-4d8a-87ab-c27e0bc41f65';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7a4dafd9-7de5-45e0-a608-7cc3ddb7bb5f';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Data Sets Search Page',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a4dafd9-7de5-45e0-a608-7cc3ddb7bb5f';
    $display->content['new-7a4dafd9-7de5-45e0-a608-7cc3ddb7bb5f'] = $pane;
    $display->panels['center'][0] = 'new-7a4dafd9-7de5-45e0-a608-7cc3ddb7bb5f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7a4dafd9-7de5-45e0-a608-7cc3ddb7bb5f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_sets_search_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_source_panel_page';
  $page->task = 'page';
  $page->admin_title = 'Data Source Panel Page';
  $page->admin_description = 'Data Source Panel Page';
  $page->path = 'datasource/%nid';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'nid' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_source_panel_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'data_source_panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Data Sources Panels',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b8b5ef50-9991-448b-abef-57df2dfb476a';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_source_panel_page'] = $page;

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
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
    $pane->pid = 'new-9c0f9b75-491e-4eea-b455-9701dc542564';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3693',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c0f9b75-491e-4eea-b455-9701dc542564';
    $display->content['new-9c0f9b75-491e-4eea-b455-9701dc542564'] = $pane;
    $display->panels['center'][0] = 'new-9c0f9b75-491e-4eea-b455-9701dc542564';
    $pane = new stdClass();
    $pane->pid = 'new-e42831a7-bb3b-4ac5-a7e2-37c6d3e16fb4';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3694',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e42831a7-bb3b-4ac5-a7e2-37c6d3e16fb4';
    $display->content['new-e42831a7-bb3b-4ac5-a7e2-37c6d3e16fb4'] = $pane;
    $display->panels['center'][1] = 'new-e42831a7-bb3b-4ac5-a7e2-37c6d3e16fb4';
    $pane = new stdClass();
    $pane->pid = 'new-0e8d2050-7046-457a-96e4-5a33c3b5c7f8';
    $pane->panel = 'main_region';
    $pane->type = 'views';
    $pane->subtype = 'news_and_events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'newsblock',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e8d2050-7046-457a-96e4-5a33c3b5c7f8';
    $display->content['new-0e8d2050-7046-457a-96e4-5a33c3b5c7f8'] = $pane;
    $display->panels['main_region'][0] = 'new-0e8d2050-7046-457a-96e4-5a33c3b5c7f8';
    $pane = new stdClass();
    $pane->pid = 'new-ff8fad0f-256b-475a-81d0-8d0439aef97d';
    $pane->panel = 'main_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3657',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ff8fad0f-256b-475a-81d0-8d0439aef97d';
    $display->content['new-ff8fad0f-256b-475a-81d0-8d0439aef97d'] = $pane;
    $display->panels['main_region'][1] = 'new-ff8fad0f-256b-475a-81d0-8d0439aef97d';
    $pane = new stdClass();
    $pane->pid = 'new-23735484-deb6-4e81-9c61-10a53d33c6b4';
    $pane->panel = 'slideshow';
    $pane->type = 'views';
    $pane->subtype = 'front_page_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23735484-deb6-4e81-9c61-10a53d33c6b4';
    $display->content['new-23735484-deb6-4e81-9c61-10a53d33c6b4'] = $pane;
    $display->panels['slideshow'][0] = 'new-23735484-deb6-4e81-9c61-10a53d33c6b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_panel'] = $page;

  return $pages;

}
