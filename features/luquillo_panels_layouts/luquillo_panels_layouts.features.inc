<?php
/**
 * @file
 * luquillo_panels_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luquillo_panels_layouts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
