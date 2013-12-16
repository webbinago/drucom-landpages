<?php
/**
 * @file
 * landpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function landpage_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => t('Use <em>landing pages</em> for product landing pages. Contains an image or video and an introductory paragraph.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
