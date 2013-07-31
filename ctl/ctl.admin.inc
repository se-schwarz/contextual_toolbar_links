<?php


/**
 * ctl administration form.
 */
function ctl_admin() {
    return array(
      'empty_text' => array(
        '#type' => 'markup',
        '#markup' => '<p>' . t('No configuration yet.') . '</p>',
      ),
    );
}
