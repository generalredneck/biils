<?php
/**
 * @file
 * bills_content_type_bill.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bills_content_type_bill_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bills_content_type_bill_node_info() {
  $items = array(
    'bill' => array(
      'name' => t('Bill'),
      'base' => 'node_content',
      'description' => t('A Bill someone is going to pay.'),
      'has_title' => '1',
      'title_label' => t('Bill Name'),
      'help' => '',
    ),
  );
  return $items;
}
