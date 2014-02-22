<?php
/**
 * @file
 * bills_content_type_payment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bills_content_type_payment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bills_content_type_payment_node_info() {
  $items = array(
    'payment' => array(
      'name' => t('Payment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Payment'),
      'help' => '',
    ),
  );
  return $items;
}
