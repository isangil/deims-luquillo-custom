<?php
/**
 * @file
 * luquillo_stylizer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luquillo_stylizer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "stylizer" && $api == "stylizer") {
    return array("version" => "1");
  }
}
