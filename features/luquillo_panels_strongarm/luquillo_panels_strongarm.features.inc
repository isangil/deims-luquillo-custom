<?php
/**
 * @file
 * luquillo_panels_strongarm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luquillo_panels_strongarm_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
