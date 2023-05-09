# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'zxyKit'
copyright = '2023, Görkem'
author = 'Görkem'
release = '0.1'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
    'sphinx_copybutton'
]
autoclass_content = 'both'
templates_path = ['_templates']
html_static_path = ['_static']
exclude_patterns = []



# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_css_files = [
    "css/custom.css",
]
# html_theme = 'furo'
html_theme = 'sphinx_book_theme'
# html_theme = 'pydata_sphinx_theme'
html_logo = "logo.png"
html_context ={
    "default_mode": "light"
}
html_theme_options = {
    "repository_url": "https://github.com/gocivici/trinteract",
    "path_to_docs": "docs/source",
    "repository_branch": "master",
    "use_repository_button": True,
    "use_issues_button": True,
    "use_edit_page_button": True,
    "navbar_end": ["navbar-icon-links"],
    "use_fullscreen_button": False,
    # "use_switch_button": False,
    #"sidebar_hide_name": True,
    # "announcement": "<em>Important</em> announcement!",
    # 'collapse_navigation': False,
}
# html_additional_pages = {
#     "index": "newIndex.html"
# }
# html_title = " " 
