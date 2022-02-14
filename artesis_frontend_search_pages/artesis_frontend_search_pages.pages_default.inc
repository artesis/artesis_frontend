<?php
/**
 * @file
 * artesis_frontend_search_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function artesis_frontend_search_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context_2';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis search nodes',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search
Website',
    'panels_breadcrumbs_paths' => '<none>
<none>',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4adf9f40-7531-448d-9941-d394ed47ac2f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9bedf867-8308-42d5-b9e8-53101796dc7b';
    $pane->panel = 'left';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'argument_string_1',
        3 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bedf867-8308-42d5-b9e8-53101796dc7b';
    $display->content['new-9bedf867-8308-42d5-b9e8-53101796dc7b'] = $pane;
    $display->panels['left'][0] = 'new-9bedf867-8308-42d5-b9e8-53101796dc7b';
    $pane = new stdClass();
    $pane->pid = 'new-7c912018-b780-4b47-8663-a1e688922372';
    $pane->panel = 'right';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c912018-b780-4b47-8663-a1e688922372';
    $display->content['new-7c912018-b780-4b47-8663-a1e688922372'] = $pane;
    $display->panels['right'][0] = 'new-7c912018-b780-4b47-8663-a1e688922372';
    $pane = new stdClass();
    $pane->pid = 'new-e2770c2e-7ddc-4bfd-8de9-a7c5fe021c29';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-results-tabs',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e2770c2e-7ddc-4bfd-8de9-a7c5fe021c29';
    $display->content['new-e2770c2e-7ddc-4bfd-8de9-a7c5fe021c29'] = $pane;
    $display->panels['right'][1] = 'new-e2770c2e-7ddc-4bfd-8de9-a7c5fe021c29';
    $pane = new stdClass();
    $pane->pid = 'new-a3bfcc6d-9f65-4029-a4cb-ca7a6aa613c4';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'ding_node_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_string_1.raw',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'a3bfcc6d-9f65-4029-a4cb-ca7a6aa613c4';
    $display->content['new-a3bfcc6d-9f65-4029-a4cb-ca7a6aa613c4'] = $pane;
    $display->panels['right'][2] = 'new-a3bfcc6d-9f65-4029-a4cb-ca7a6aa613c4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_ting_search_panel_context_2';
  $handler->task = 'search';
  $handler->subtask = 'ting_search';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Artesis search results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Search
Materials',
    'panels_breadcrumbs_paths' => '<none>
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%keywords:html_safe';
  $display->uuid = '09a3e7b4-b55a-43b0-88c9-524297849194';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd437f13-718f-4e23-90dc-8751fff7c966';
    $pane->panel = 'left';
    $pane->type = 'ding_facetbrowser';
    $pane->subtype = 'ding_facetbrowser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Refine your search',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd437f13-718f-4e23-90dc-8751fff7c966';
    $display->content['new-bd437f13-718f-4e23-90dc-8751fff7c966'] = $pane;
    $display->panels['left'][0] = 'new-bd437f13-718f-4e23-90dc-8751fff7c966';
    $pane = new stdClass();
    $pane->pid = 'new-ab82b422-aa95-4f08-9f3b-48de1f61bc64';
    $pane->panel = 'left';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'argument_string_1',
        3 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ab82b422-aa95-4f08-9f3b-48de1f61bc64';
    $display->content['new-ab82b422-aa95-4f08-9f3b-48de1f61bc64'] = $pane;
    $display->panels['left'][1] = 'new-ab82b422-aa95-4f08-9f3b-48de1f61bc64';
    $pane = new stdClass();
    $pane->pid = 'new-c88e9ea9-e7cb-487c-9ade-cd02eec3b209';
    $pane->panel = 'right';
    $pane->type = 'ting_search';
    $pane->subtype = 'ting_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c88e9ea9-e7cb-487c-9ade-cd02eec3b209';
    $display->content['new-c88e9ea9-e7cb-487c-9ade-cd02eec3b209'] = $pane;
    $display->panels['right'][0] = 'new-c88e9ea9-e7cb-487c-9ade-cd02eec3b209';
    $pane = new stdClass();
    $pane->pid = 'new-cc17092b-e76d-4ea4-ab46-813e09f49c27';
    $pane->panel = 'right';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-results-tabs',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc17092b-e76d-4ea4-ab46-813e09f49c27';
    $display->content['new-cc17092b-e76d-4ea4-ab46-813e09f49c27'] = $pane;
    $display->panels['right'][1] = 'new-cc17092b-e76d-4ea4-ab46-813e09f49c27';
    $pane = new stdClass();
    $pane->pid = 'new-40f26d33-936f-440e-9669-425e4e5395df';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ting_search-sort-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '40f26d33-936f-440e-9669-425e4e5395df';
    $display->content['new-40f26d33-936f-440e-9669-425e4e5395df'] = $pane;
    $display->panels['right'][2] = 'new-40f26d33-936f-440e-9669-425e4e5395df';
    $pane = new stdClass();
    $pane->pid = 'new-15d44c95-6a77-4100-b725-2a07719dc2bb';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ding_toggle_format-toggle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '15d44c95-6a77-4100-b725-2a07719dc2bb';
    $display->content['new-15d44c95-6a77-4100-b725-2a07719dc2bb'] = $pane;
    $display->panels['right'][3] = 'new-15d44c95-6a77-4100-b725-2a07719dc2bb';
    $pane = new stdClass();
    $pane->pid = 'new-877d22e0-313f-4646-9703-4233aa22b243';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ding_availability-legend';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '877d22e0-313f-4646-9703-4233aa22b243';
    $display->content['new-877d22e0-313f-4646-9703-4233aa22b243'] = $pane;
    $display->panels['right'][4] = 'new-877d22e0-313f-4646-9703-4233aa22b243';
    $pane = new stdClass();
    $pane->pid = 'new-c6c2a21f-5ed8-4c96-bd65-f05e9d379523';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ting_search-records-per-page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c6c2a21f-5ed8-4c96-bd65-f05e9d379523';
    $display->content['new-c6c2a21f-5ed8-4c96-bd65-f05e9d379523'] = $pane;
    $display->panels['right'][5] = 'new-c6c2a21f-5ed8-4c96-bd65-f05e9d379523';
    $pane = new stdClass();
    $pane->pid = 'new-4c4c9701-d17b-4036-bcd5-da020b2cfe4d';
    $pane->panel = 'right';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'ting_search',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4c4c9701-d17b-4036-bcd5-da020b2cfe4d';
    $display->content['new-4c4c9701-d17b-4036-bcd5-da020b2cfe4d'] = $pane;
    $display->panels['right'][6] = 'new-4c4c9701-d17b-4036-bcd5-da020b2cfe4d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_ting_search_panel_context_2'] = $handler;

  return $export;
}
