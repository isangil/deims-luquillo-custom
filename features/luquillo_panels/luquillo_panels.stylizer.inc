<?php
/**
 * @file
 * luquillo_panels.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function luquillo_panels_default_stylizer() {
  $export = array();

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'clone_of_main_italics_mission';
  $style->admin_title = 'main_italics_mission_noItalics';
  $style->admin_description = 'square with header';
  $style->settings = array(
    'name' => 'clone_of_main_italics_mission',
    'style_base' => 'pane_plain_box',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => 'normal',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'header_font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '5px',
      'style' => 'groove',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#383b52',
      'header-background' => '#FFFFFF',
      'header-text' => '#000000',
      'header-border' => '#FFFFFF',
    ),
  );
  $export['clone_of_main_italics_mission'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'home_pane_one';
  $style->admin_title = 'Home Panel 1';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'home_pane_one',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#ffffff',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'header_font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
  );
  $export['home_pane_one'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'landing_page_style';
  $style->admin_title = 'landing page style';
  $style->admin_description = 'landing page style';
  $style->settings = array(
    'name' => 'landing_page_style',
    'style_base' => 'region_plain_box',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => 'normal',
      'decoration' => 'none',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => 'none',
      'style' => '',
    ),
    'padding' => array(
      'top' => '0.05em',
      'right' => '0.05em',
      'bottom' => '0.05em',
      'left' => '0.05em',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#FFFFFF',
    ),
  );
  $export['landing_page_style'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'left_side_only';
  $style->admin_title = 'left side only';
  $style->admin_description = 'A panel with a left side only';
  $style->settings = array(
    'name' => 'left_side_only',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '0.05em',
      'left' => '0.25em',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
    ),
  );
  $export['left_side_only'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'left_side_only_plain_pane';
  $style->admin_title = 'left side only plain pane';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'left_side_only_plain_pane',
    'style_base' => 'region_plain_box',
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '1px',
      'style' => 'inset',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '0.3em',
      'left' => '0.25em',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#000000',
    ),
  );
  $export['left_side_only_plain_pane'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'main_italics_mission';
  $style->admin_title = 'main_italics_mission';
  $style->admin_description = 'Italic font and square ';
  $style->settings = array(
    'name' => 'main_italics_mission',
    'style_base' => 'pane_plain_box',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => 'italic',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'header_font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => 'none',
      'style' => 'inset',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#414c70',
      'header-background' => '#FFFFFF',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
  );
  $export['main_italics_mission'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'main_pages_square_style';
  $style->admin_title = 'main pages square style';
  $style->admin_description = 'main pages square style';
  $style->settings = array(
    'name' => 'main_pages_square_style',
    'style_base' => 'region_plain_box',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '0.05em',
      'right' => '0.05em',
      'bottom' => '0.05em',
      'left' => '0.05em',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#FFFFFF',
    ),
  );
  $export['main_pages_square_style'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'main_pages_style';
  $style->admin_title = 'main pages style';
  $style->admin_description = 'main pages style';
  $style->settings = array(
    'name' => 'main_pages_style',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => 'normal',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '0.05em',
      'right' => '0.05em',
      'bottom' => '0.05em',
      'left' => '0.05em',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
    ),
  );
  $export['main_pages_style'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'main_style';
  $style->admin_title = 'main_style';
  $style->admin_description = 'main_style';
  $style->settings = array(
    'name' => 'main_style',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => 'normal',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
    ),
  );
  $export['main_style'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'overviewarticle_no_border_square';
  $style->admin_title = 'overviewarticle-no-border-square';
  $style->admin_description = 'overviewarticle-no-border-square';
  $style->settings = array(
    'name' => 'overviewarticle_no_border_square',
    'style_base' => 'pane_plain_box',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => 'normal',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'header_font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'medium',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => 'none',
      'style' => '',
    ),
    'header_border' => array(
      'thickness' => 'none',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#000000',
      'header-background' => '#FFFFFF',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
  );
  $export['overviewarticle_no_border_square'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'panelandpanerounded';
  $style->admin_title = 'panelandpanerounded';
  $style->admin_description = 'Rounded squares for panels and panes';
  $style->settings = array(
    'name' => 'panelandpanerounded',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => 'Georgia, Times New Roman, Times, serif',
      'size' => 'large',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => 'left',
    ),
    'padding' => array(
      'top' => '0.05em',
      'right' => '0.1em',
      'bottom' => '0.15em',
      'left' => '0.05em',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
    ),
  );
  $export['panelandpanerounded'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'rounded_corners_flat_sides';
  $style->admin_title = 'Rounded Corners flat sides';
  $style->admin_description = 'Rounded Corners flat sides';
  $style->settings = array(
    'name' => 'rounded_corners_flat_sides',
    'style_base' => 'pane_rounded_shadow',
    'header_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '0.05em',
      'right' => '0.05em',
      'bottom' => '0.05em',
      'left' => '0.05em',
    ),
    'header_border' => array(
      'thickness' => 'none',
      'style' => 'outset',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
  );
  $export['rounded_corners_flat_sides'] = $style;

  return $export;
}
