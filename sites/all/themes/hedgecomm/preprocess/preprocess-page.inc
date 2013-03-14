<?php

/**
 * @file
 * Preprocess page variables
 */
 
/**
 * Implements THEME_preprocess_page
 */
function hedgecomm_alpha_preprocess_page(&$variables) {

  if (drupal_is_front_page()) {
    $variables['title'] = "";
  }

}