<?php
/**
 * @file
 * Definition of LuquilloContentSlideMigration.
 */
class LuquilloContentSlideMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'fpss_slide',
      'destination_type' => 'slides',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    $this->addFieldMapping('field_images','upload')
      ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');

    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'upload:description',
      'upload:list',
      'upload:weight',
      'field_slide_slideshow', // this is a strange node referrer
    ));

    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:file_replace',
      'field_images:alt',
      'field_images:title',

    ));
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

