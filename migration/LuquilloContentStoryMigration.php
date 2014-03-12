<?php

/**
 * @file
 * Definition of LuquilloContentStoryMigration.
 *
 *  Only 3 nodes of this Story kind, which are also as "Key Findings"
 *  MIGRATE to Articles with SECTIONS tag NEWS
 *  Create basic view with block (trimmed linked titles) and page
 *  Create section News tag 
 */

class LuquilloContentStoryMigration extends DeimsContentStoryMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_section')
      ->defaultValue('Key Findings');
    $this->addFieldMapping('field_section:create_term')
      ->defaultValue(TRUE);
    
    $this->addUnmigratedSources(array(    
     'revision',
     'log',
     'revision_uid',
     'upload',
     'upload:description',
     'upload:weight',
     'upload:list',
    ));

    $this->addUnmigratedDestinations(array(
      'field_article_date',
      'field_article_date:timezone',
      'field_article_date:rrule',
      'field_article_date:to',
      'field_files',
      'field_files:file_class',
      'field_files:language',
      'field_files:preserve_files',
      'field_files:destination_dir',
      'field_files:destination_file',
      'field_files:file_replace',
      'field_files:source_dir',
      'field_files:urlencode',
      'field_files:description',
      'field_files:display',
      'field_keywords',
      'field_keywords:source_type',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_related_people',
      'field_related_publications',
      'field_section:source_type',
      'field_section:ignore_case',
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
