<?php
/**
 * @file
 * deims_organization.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function deims_organization_field_default_fields() {
  $fields = array();

  // Exported field: 'node-organization-field_organization_type'.
  $fields['node-organization-field_organization_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_type',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Collaborator' => 'Collaborator',
          'Program' => 'Program',
          'Host' => 'Host',
          'Sponsor' => 'Sponsor',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'bdp' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
        'eml' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_type',
      'label' => 'Organization Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '3',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-organization-field_url'.
  $fields['node-organization-field_url'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_url',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'url',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'url',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'bdp' => array(
          'label' => 'hidden',
          'module' => 'bdp',
          'settings' => array(),
          'type' => 'bdp_onlineUrl',
          'weight' => '1',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'url',
          'settings' => array(
            'nofollow' => FALSE,
            'trim_length' => 80,
          ),
          'type' => 'url_default',
          'weight' => '1',
        ),
        'eml' => array(
          'label' => 'hidden',
          'module' => 'eml',
          'settings' => array(),
          'type' => 'eml_onlineUrl',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_url',
      'label' => 'URL',
      'required' => 0,
      'settings' => array(
        'title_fetch' => 0,
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'url',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'url_external',
        'weight' => '1',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Organization Type');
  t('URL');

  return $fields;
}
