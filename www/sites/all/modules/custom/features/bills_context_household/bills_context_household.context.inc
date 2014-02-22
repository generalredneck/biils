<?php
/**
 * @file
 * bills_context_household.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bills_context_household_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'household';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'household' => 'household',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bills-household_bills' => array(
          'module' => 'bills',
          'delta' => 'household_bills',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['household'] = $context;

  return $export;
}
