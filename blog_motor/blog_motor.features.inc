<?php
/**
 * @file
 * blog_motor.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_motor_node_info() {
  $items = array(
    'blogbejegyz_s' => array(
      'name' => t('blogbejegyzés'),
      'base' => 'node_content',
      'description' => t('asdfgsdfg'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
