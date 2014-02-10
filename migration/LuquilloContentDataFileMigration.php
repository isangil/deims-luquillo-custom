<?php
/**
 * @file
 * Definition of LuquilloContentDataFileMigration.
 */

class LuquilloContentDataFileMigration extends DeimsContentDataFileMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addUnmigratedSources(array(
      'field_dataset_restricted',
    ));

    // The Luquillo has several fields w/ non-standard machine names, tweaks here.
    $this->removeFieldMapping('field_date_range');
    $this->addFieldMapping('field_date_range','field_datafile_date');
    $this->addFieldMapping('field_date_range:to', 'field_datafile_date:value2');

    // we have no instrumentation SOURCES
    $this->removeFieldMapping('field_instrumentation');

    // @ToDo add unmigrated destinations? like instruments.

    // @ToDo source order? field_datafile_vieworder .. to deltas dest?

    // @ToDo  note -- we need fix for when data file has NO variables.

    // methods, in prepare to merge with sampling
    $this->removeFieldMapping('field_methods');
    $this->addFieldMapping('field_methods','field_methods')
      ->description('Luq. methods handled in prepareRow');

    $this->removeFieldMapping('field_quality');
    $this->addFieldMapping('field_quality','field_quality_control')

    // note vocab is 12, will need to see what's with origin migration
    $this->addFieldMapping('field_core_areas', '12')
      ->sourceMigration('DeimsTaxonomyCoreAreas');
    $this->addFieldMapping('field_core_areas:source_type')
      ->defaultValue('tid');
  }

  public function prepareRow($row) {

    parent::prepareRow($row);
    // Concatenate Methods-description and methods-sampling in LUQ

   if (!empty($row->field_sampling_description)) {
     $row->field_methods = $row->field_methods_description . ' <p /> Sampling Description:<p/>'.$row->field_sampling_description;
   }else{
     $row->field_methods = $row->field_methods_description;
   }

    switch ($row->field_quote_character) {
      case 'double quote':
        $row->field_quote_character = '"';
        break;
      case 'single quote':
        $row->field_quote_character = "'";
        break;
    }

  }
}

