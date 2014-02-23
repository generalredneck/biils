<?php
/**
 * @file
 * bills_menu_user_menu.features.inc
 */

/**
 * Implements hook_menu_item_visibility_export_fields().
 */
function bills_menu_user_menu_menu_item_visibility_export_fields() {
  $items = array(
    'user-menu_log-in:user' => array(
      0 => array(
        'rid' => 1,
      ),
    ),
    'user-menu_register:user/register' => array(
      0 => array(
        'rid' => 1,
      ),
    ),
  );
  return $items;
}
