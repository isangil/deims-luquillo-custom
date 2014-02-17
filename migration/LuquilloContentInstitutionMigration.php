<?php

/**
 * @file
 * Definition of DeimsContentPageMigration.
 */

class LuquilloContentInstitutionMigration extends DrupalNode6Migration {
  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'institution_links',
      'destination_type' => 'organization',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // This content type does not use or have a body field.
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:language');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->addUnmigratedSources(array('body', 'teaser', 'format'));

    $this->addFieldMapping('field_url', 'field_instutionlink_namelink');
    $this->addFieldMapping('field_url:title', 'field_instutionlink_namelink:title');
    $this->addFieldMapping('field_organization_type','field_instutionlink_type');

    $this->addUnmigratedSources(array(
     'revision',
     'revision_uid',
     'log',
     'field_inst_logo',
     'field_instutionlink_namelink:attributes',
     'field_inst_logo:list',
     'field_inst_logo_data',
     'upload',
     'upload:description',
     'upload:list',
     'upload:weight',
    ));

    $this->addUnmigratedDestinations(array('field_url:attributes',));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
