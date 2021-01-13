<?php

/**
 * Implements hook_views_data_alter(). Hook to alter relevant data
 */

function html_renderer_views_data_alter(&$data) {
    $data['islandora_solr']['mods_titleInfo_subTitle_ms'] = array(
        'title' => t('mods_titleInfo_subTitle_ms_html'),
        'help' => t('Will render in text html.'),
        'field' => array(
            'handler' => 'html_renderer_handler_htmlrender',
        ),
    );
    return $data;
}
