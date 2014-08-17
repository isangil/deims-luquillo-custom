<?php
/**
 * @file
 * luquillo_content_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luquillo_content_panes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}
