<?php
/**
 * @file
 * luquillo_panels_field_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luquillo_panels_field_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
