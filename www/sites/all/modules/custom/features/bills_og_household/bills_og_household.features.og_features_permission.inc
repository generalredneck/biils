<?php
/**
 * @file
 * bills_og_household.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function bills_og_household_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:household:add user'
  $permissions['node:household:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:household:administer group'
  $permissions['node:household:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:approve and deny subscription'
  $permissions['node:household:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:household:create bill content'
  $permissions['node:household:create bill content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:household:create payment content'
  $permissions['node:household:create payment content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:delete any bill content'
  $permissions['node:household:delete any bill content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:delete any payment content'
  $permissions['node:household:delete any payment content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:delete own bill content'
  $permissions['node:household:delete own bill content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:household:delete own payment content'
  $permissions['node:household:delete own payment content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:household:manage members'
  $permissions['node:household:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:household:manage permissions'
  $permissions['node:household:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:household:manage roles'
  $permissions['node:household:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:subscribe'
  $permissions['node:household:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:household:subscribe without approval'
  $permissions['node:household:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:unsubscribe'
  $permissions['node:household:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:household:update any bill content'
  $permissions['node:household:update any bill content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:update any payment content'
  $permissions['node:household:update any payment content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:household:update group'
  $permissions['node:household:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:household:update own bill content'
  $permissions['node:household:update own bill content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:household:update own payment content'
  $permissions['node:household:update own payment content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
