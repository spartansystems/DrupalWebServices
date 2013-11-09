<?php
/**
 * @file
 * services_demo_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_demo_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function services_demo_configuration_node_info() {
  $items = array(
    'example_content' => array(
      'name' => t('Example Content'),
      'base' => 'node_content',
      'description' => t('Example Content for Services demo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
