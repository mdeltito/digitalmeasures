<?php

/**
 * @file
 * Custom drush commands for the digitalmeasures module.
 */

/**
 * Implements hook_drush_command().
 */
function digitalmeasures_drush_command() {
  $items = array();
  $items['user_profiles'] = array(
    'description' => 'Retrieve user profile data from Digital Measures.',
    'aliases' => array('dmup'),
    'arguments' => array(
      'usernames' => 'Comma separated list of usernames.',
    ),
    'examples' => array(
      'drush dmup mgp140,mpr13' => 'Retrieve all profile infromation for mgp140 and mpr13.',
    ),
  );

  return $items;
}

/**
 * digitalmeasures retrieve user profile command.
 */
function drush_digitalmeasures_user_profiles($usernames) {
  $usernames = explode(',', $usernames);
  digitalmeasures_digitalmeasures_user_profiles($usernames);
}