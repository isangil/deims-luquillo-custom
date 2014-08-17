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
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Data sources [field_data_sources])',
        'keyword' => 'datasource',
        'name' => 'entity_from_field:field_data_sources-node-node',
        'delta' => '0',
        'context' => 'relationship_entity_from_field:field_data_sources-node-node_1',
        'id' => 1,
      ),
    ),
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
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '56.746161980819025',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '43.253838019180975',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top_center' => array(
        'type' => 'region',
        'title' => 'Top Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'leftbottom_',
          1 => 'keywords',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'keywords' => array(
        'type' => 'region',
        'title' => 'Keywords',
        'width' => '56.70820594192242',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'leftbottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'leftbottom' => array(
        'type' => 'region',
        'title' => 'Additional Information',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'leftbottom_' => array(
        'type' => 'region',
        'title' => 'leftbottom',
        'width' => '43.291794058077585',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'complete_metadata',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'complete_metadata' => array(
        'type' => 'region',
        'title' => 'Complete Metadata',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
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
      'complete_metadata' => NULL,
    ),
    'left' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'center' => array(
      'style' => 'stylizer:left_side_only_plain_pane',
    ),
    'keywords' => array(
      'style' => 'default',
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
  );
  $display->cache = array();
  $display->title = 'Data Set Metadata and Data';
  $display->uuid = '022016d3-8c52-4475-8bb2-86e25cf13872';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b61f13f9-53a6-47a5-bbdb-7db3b15f3ccc';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_contact';
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b61f13f9-53a6-47a5-bbdb-7db3b15f3ccc';
    $display->content['new-b61f13f9-53a6-47a5-bbdb-7db3b15f3ccc'] = $pane;
    $display->panels['center'][0] = 'new-b61f13f9-53a6-47a5-bbdb-7db3b15f3ccc';
    $pane = new stdClass();
    $pane->pid = 'new-303ad7d1-1a8d-49e7-8681-b4eef49b6e7b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_creator';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
        'text' => '[entity:label]',
        'check_access' => 1,
        'element' => '',
        'multiple' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '303ad7d1-1a8d-49e7-8681-b4eef49b6e7b';
    $display->content['new-303ad7d1-1a8d-49e7-8681-b4eef49b6e7b'] = $pane;
    $display->panels['center'][1] = 'new-303ad7d1-1a8d-49e7-8681-b4eef49b6e7b';
    $pane = new stdClass();
    $pane->pid = 'new-85514ed6-0a94-4ca3-b064-91109f564d11';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_roles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_iso_element',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => '0',
        'text' => '[entity:label]',
        'check_access' => 1,
        'view_mode' => 'teaser',
        'links' => 1,
        'element' => '',
        'multiple' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Additional People and Role',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '85514ed6-0a94-4ca3-b064-91109f564d11';
    $display->content['new-85514ed6-0a94-4ca3-b064-91109f564d11'] = $pane;
    $display->panels['center'][2] = 'new-85514ed6-0a94-4ca3-b064-91109f564d11';
    $pane = new stdClass();
    $pane->pid = 'new-f46b9888-d520-4eb9-bc44-42fcfe024d1b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_abstract';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '1000',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f46b9888-d520-4eb9-bc44-42fcfe024d1b';
    $display->content['new-f46b9888-d520-4eb9-bc44-42fcfe024d1b'] = $pane;
    $display->panels['center'][3] = 'new-f46b9888-d520-4eb9-bc44-42fcfe024d1b';
    $pane = new stdClass();
    $pane->pid = 'new-8f5e60af-4220-481a-86ec-240e7d5867df';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_methods';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'trim_length' => '800',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Methods',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8f5e60af-4220-481a-86ec-240e7d5867df';
    $display->content['new-8f5e60af-4220-481a-86ec-240e7d5867df'] = $pane;
    $display->panels['center'][4] = 'new-8f5e60af-4220-481a-86ec-240e7d5867df';
    $pane = new stdClass();
    $pane->pid = 'new-85766ab4-c6e5-4fa8-8473-9d81d61da965';
    $pane->panel = 'complete_metadata';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'All Metadata',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85766ab4-c6e5-4fa8-8473-9d81d61da965';
    $display->content['new-85766ab4-c6e5-4fa8-8473-9d81d61da965'] = $pane;
    $display->panels['complete_metadata'][0] = 'new-85766ab4-c6e5-4fa8-8473-9d81d61da965';
    $pane = new stdClass();
    $pane->pid = 'new-3ff133b5-f5d5-460b-acbf-0490285603cb';
    $pane->panel = 'keywords';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_core_areas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ds_taxonomy_separator',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:clone_of_main_italics_mission',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ff133b5-f5d5-460b-acbf-0490285603cb';
    $display->content['new-3ff133b5-f5d5-460b-acbf-0490285603cb'] = $pane;
    $display->panels['keywords'][0] = 'new-3ff133b5-f5d5-460b-acbf-0490285603cb';
    $pane = new stdClass();
    $pane->pid = 'new-8379fcd6-5d93-49a4-8040-edd1533ad0dd';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_sets-panel_pane_1';
    $pane->shown = TRUE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8379fcd6-5d93-49a4-8040-edd1533ad0dd';
    $display->content['new-8379fcd6-5d93-49a4-8040-edd1533ad0dd'] = $pane;
    $display->panels['left'][0] = 'new-8379fcd6-5d93-49a4-8040-edd1533ad0dd';
    $pane = new stdClass();
    $pane->pid = 'new-a6c349f7-2acd-4693-83b0-f33288dc7110';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'eml_yeardate',
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6c349f7-2acd-4693-83b0-f33288dc7110';
    $display->content['new-a6c349f7-2acd-4693-83b0-f33288dc7110'] = $pane;
    $display->panels['left'][1] = 'new-a6c349f7-2acd-4693-83b0-f33288dc7110';
    $pane = new stdClass();
    $pane->pid = 'new-56ae93a6-0d03-45da-aa66-2e28cdb7bf3d';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_publications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'token_formatters_entity_reference',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => '[entity:url]',
        'text' => '[entity:label]',
        'check_access' => 1,
        'view_mode' => 'full',
        'links' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '56ae93a6-0d03-45da-aa66-2e28cdb7bf3d';
    $display->content['new-56ae93a6-0d03-45da-aa66-2e28cdb7bf3d'] = $pane;
    $display->panels['left'][2] = 'new-56ae93a6-0d03-45da-aa66-2e28cdb7bf3d';
    $pane = new stdClass();
    $pane->pid = 'new-2fc4adff-55df-44f7-96e5-53510d757328';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_sites';
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
      'override_title_text' => 'Related Research Sites',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2fc4adff-55df-44f7-96e5-53510d757328';
    $display->content['new-2fc4adff-55df-44f7-96e5-53510d757328'] = $pane;
    $display->panels['left'][3] = 'new-2fc4adff-55df-44f7-96e5-53510d757328';
    $pane = new stdClass();
    $pane->pid = 'new-6070a6af-8de1-424e-9679-4efe723244b1';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Data Sets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6070a6af-8de1-424e-9679-4efe723244b1';
    $display->content['new-6070a6af-8de1-424e-9679-4efe723244b1'] = $pane;
    $display->panels['left'][4] = 'new-6070a6af-8de1-424e-9679-4efe723244b1';
    $pane = new stdClass();
    $pane->pid = 'new-2495da47-b8d4-4561-9461-14435f1c78ec';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_data_sources';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
      'override_title_text' => 'Files Metadata and Data: ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2495da47-b8d4-4561-9461-14435f1c78ec';
    $display->content['new-2495da47-b8d4-4561-9461-14435f1c78ec'] = $pane;
    $display->panels['left'][5] = 'new-2495da47-b8d4-4561-9461-14435f1c78ec';
    $pane = new stdClass();
    $pane->pid = 'new-a67761c1-d30f-49bf-bd62-459e3eb4daa5';
    $pane->panel = 'leftbottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_keywords';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'token_formatters_term_reference',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'text' => '[term:name]',
        'link' => 'taxonomy/term/[term:tid]',
        'check_access' => TRUE,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Keywords',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:clone_of_main_italics_mission',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a67761c1-d30f-49bf-bd62-459e3eb4daa5';
    $display->content['new-a67761c1-d30f-49bf-bd62-459e3eb4daa5'] = $pane;
    $display->panels['leftbottom'][0] = 'new-a67761c1-d30f-49bf-bd62-459e3eb4daa5';
    $pane = new stdClass();
    $pane->pid = 'new-e36641ae-831e-42be-a567-3107d4deeb04';
    $pane->panel = 'leftbottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_reds_searcher_keywords';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'token_formatters_term_reference',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'text' => '[term:name]',
        'link' => 'taxonomy/term/[term:tid]',
        'check_access' => TRUE,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:clone_of_main_italics_mission',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e36641ae-831e-42be-a567-3107d4deeb04';
    $display->content['new-e36641ae-831e-42be-a567-3107d4deeb04'] = $pane;
    $display->panels['leftbottom'][1] = 'new-e36641ae-831e-42be-a567-3107d4deeb04';
    $pane = new stdClass();
    $pane->pid = 'new-6662a607-ba08-4adc-bd51-8715b8663926';
    $pane->panel = 'leftbottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_additional_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '800',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:clone_of_main_italics_mission',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6662a607-ba08-4adc-bd51-8715b8663926';
    $display->content['new-6662a607-ba08-4adc-bd51-8715b8663926'] = $pane;
    $display->panels['leftbottom'][2] = 'new-6662a607-ba08-4adc-bd51-8715b8663926';
    $pane = new stdClass();
    $pane->pid = 'new-ccf43f70-3a9d-412d-b609-f236679e6311';
    $pane->panel = 'leftbottom_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dataset_program';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'ds_taxonomy_separator',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:clone_of_main_italics_mission',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ccf43f70-3a9d-412d-b609-f236679e6311';
    $display->content['new-ccf43f70-3a9d-412d-b609-f236679e6311'] = $pane;
    $display->panels['leftbottom_'][0] = 'new-ccf43f70-3a9d-412d-b609-f236679e6311';
    $pane = new stdClass();
    $pane->pid = 'new-0311c714-000b-436f-b4ac-8a5da64827e9';
    $pane->panel = 'top_center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_short_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = '0311c714-000b-436f-b4ac-8a5da64827e9';
    $display->content['new-0311c714-000b-436f-b4ac-8a5da64827e9'] = $pane;
    $display->panels['top_center'][0] = 'new-0311c714-000b-436f-b4ac-8a5da64827e9';
    $pane = new stdClass();
    $pane->pid = 'new-0a1740eb-4d3d-4eca-8521-a946ac71e956';
    $pane->panel = 'top_center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:lightgreenroundtable',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0a1740eb-4d3d-4eca-8521-a946ac71e956';
    $display->content['new-0a1740eb-4d3d-4eca-8521-a946ac71e956'] = $pane;
    $display->panels['top_center'][1] = 'new-0a1740eb-4d3d-4eca-8521-a946ac71e956';
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
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
    'left' => array(
      'style' => 'stylizer:main_pages_style',
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => 'stylizer:main_pages_style',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c2d90e9-5be0-4fb8-b4d5-57c91feb8460';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01986be6-7036-42f8-b3aa-e192e2f6f721';
    $pane->panel = 'left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01986be6-7036-42f8-b3aa-e192e2f6f721';
    $display->content['new-01986be6-7036-42f8-b3aa-e192e2f6f721'] = $pane;
    $display->panels['left'][0] = 'new-01986be6-7036-42f8-b3aa-e192e2f6f721';
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
    $pane->pid = 'new-314a17cd-9345-42ae-aa4c-5e9278367e68';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:field_data_sources';
    $pane->shown = TRUE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '314a17cd-9345-42ae-aa4c-5e9278367e68';
    $display->content['new-314a17cd-9345-42ae-aa4c-5e9278367e68'] = $pane;
    $display->panels['middle'][1] = 'new-314a17cd-9345-42ae-aa4c-5e9278367e68';
    $pane = new stdClass();
    $pane->pid = 'new-6c28ceb8-4315-4779-8774-7bf8ef8001b8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date_range';
    $pane->shown = TRUE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c28ceb8-4315-4779-8774-7bf8ef8001b8';
    $display->content['new-6c28ceb8-4315-4779-8774-7bf8ef8001b8'] = $pane;
    $display->panels['right'][0] = 'new-6c28ceb8-4315-4779-8774-7bf8ef8001b8';
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'title__people',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Abstract, Data Sets lists, etc',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'title__people' => array(
        'type' => 'region',
        'title' => 'Title, People',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '38989d63-7104-4fde-b948-e8419a3bfc21';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c6dca313-559f-401f-a88f-30a1f2ec8c20';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_abstract';
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
    $pane->uuid = 'c6dca313-559f-401f-a88f-30a1f2ec8c20';
    $display->content['new-c6dca313-559f-401f-a88f-30a1f2ec8c20'] = $pane;
    $display->panels['center'][0] = 'new-c6dca313-559f-401f-a88f-30a1f2ec8c20';
    $pane = new stdClass();
    $pane->pid = 'new-b328b777-5bf2-4f1e-add4-e793ef02efea';
    $pane->panel = 'title__people';
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
    $display->panels['title__people'][0] = 'new-b328b777-5bf2-4f1e-add4-e793ef02efea';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed464be6-b4c1-4458-bf81-3c12ebc8c06e';
    $display->content['new-ed464be6-b4c1-4458-bf81-3c12ebc8c06e'] = $pane;
    $display->panels['title__people'][1] = 'new-ed464be6-b4c1-4458-bf81-3c12ebc8c06e';
    $pane = new stdClass();
    $pane->pid = 'new-0e5066ef-6213-41ad-9887-dcdee2c6e801';
    $pane->panel = 'title__people';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_director';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0e5066ef-6213-41ad-9887-dcdee2c6e801';
    $display->content['new-0e5066ef-6213-41ad-9887-dcdee2c6e801'] = $pane;
    $display->panels['title__people'][2] = 'new-0e5066ef-6213-41ad-9887-dcdee2c6e801';
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
      'override_title' => 1,
      'override_title_text' => 'Related Data Sets:',
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
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Biblio',
    'no_blocks' => 0,
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2540bcce-9e73-41fb-aed1-935f4b467fcc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-890ad482-8a8e-4169-b612-ab67d034acb6';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
    $pane->uuid = '890ad482-8a8e-4169-b612-ab67d034acb6';
    $display->content['new-890ad482-8a8e-4169-b612-ab67d034acb6'] = $pane;
    $display->panels['middle'][0] = 'new-890ad482-8a8e-4169-b612-ab67d034acb6';
    $pane = new stdClass();
    $pane->pid = 'new-295e8f6e-4352-4c8f-abd4-5354546edb68';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
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
    $pane->uuid = '295e8f6e-4352-4c8f-abd4-5354546edb68';
    $display->content['new-295e8f6e-4352-4c8f-abd4-5354546edb68'] = $pane;
    $display->panels['middle'][1] = 'new-295e8f6e-4352-4c8f-abd4-5354546edb68';
    $pane = new stdClass();
    $pane->pid = 'new-5d758f04-1fbb-41f3-828d-4757826cff45';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '5d758f04-1fbb-41f3-828d-4757826cff45';
    $display->content['new-5d758f04-1fbb-41f3-828d-4757826cff45'] = $pane;
    $display->panels['middle'][2] = 'new-5d758f04-1fbb-41f3-828d-4757826cff45';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-890ad482-8a8e-4169-b612-ab67d034acb6';
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
