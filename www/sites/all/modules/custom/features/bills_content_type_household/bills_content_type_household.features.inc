<?php
/**
 * @file
 * bills_content_type_household.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bills_content_type_household_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bills_content_type_household_node_info() {
  $items = array(
    'household' => array(
      'name' => t('Household'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Household Name'),
      'help' => '',
    ),
  );
  return $items;
}
