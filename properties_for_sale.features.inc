<?php
/**
 * @file
 * properties_for_sale.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function properties_for_sale_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
