<?php
/**
 * @file
 * artesis_frontend_search_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function artesis_frontend_search_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highlight_area';
  $strongarm->value = '.field-group-format
.view-id-ding_node_search
.mkdru-result-list';
  $export['highlight_area'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highlight_color';
  $strongarm->value = 'yellow';
  $export['highlight_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highlight_patterns';
  $strongarm->value = '\\/meta\\/([^\\?]+)
\\/node\\/([^\\?]+)
\\/ting\\/([^\\?]+)';
  $export['highlight_patterns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'highlight_text_color';
  $strongarm->value = 'black';
  $export['highlight_text_color'] = $strongarm;

  return $export;
}
