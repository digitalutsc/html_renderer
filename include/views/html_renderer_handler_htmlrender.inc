<?php
/**
 * Handler, renders the html
 */

class html_renderer_handler_htmlrender extends views_handler_field {
    function render($values) {
        $value = $this->get_value($values)[0];
        return $value;
    }
}
