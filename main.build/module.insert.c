/* Generated code for Python module 'insert'
 * created by Nuitka version 0.6.11.4
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_insert" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_insert;
PyDictObject *moduledict_insert;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[83];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "insert", 83);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_insert(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "insert", 83);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b560d87754ca3f8406d426bbe5d365c1;
static PyCodeObject *codeobj_c78aa3c441d74e5ad40fae3be82c735e;
static PyCodeObject *codeobj_e37aeb3a37a6b9c88a13edb4e5a0c875;
static PyCodeObject *codeobj_22eb23391676f51fd6296e46769afc82;
static PyCodeObject *codeobj_55afa8cc013a1ad6df54df3c59cc48ba;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[77]); CHECK_OBJECT(module_filename_obj);
    codeobj_b560d87754ca3f8406d426bbe5d365c1 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_c78aa3c441d74e5ad40fae3be82c735e = MAKE_CODEOBJECT(module_filename_obj, 13, CO_NOFREE, mod_consts[64], mod_consts[79], NULL, 0, 0, 0);
    codeobj_e37aeb3a37a6b9c88a13edb4e5a0c875 = MAKE_CODEOBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[80], mod_consts[79], 3, 0, 0);
    codeobj_22eb23391676f51fd6296e46769afc82 = MAKE_CODEOBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[81], NULL, 1, 0, 0);
    codeobj_55afa8cc013a1ad6df54df3c59cc48ba = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[82], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__16__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_insert$$$function__1_cast();


static PyObject *MAKE_FUNCTION_insert$$$function__2___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_insert$$$function__3_getInputs();


// The module function definitions.
static PyObject *impl_insert$$$function__1_cast(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_22eb23391676f51fd6296e46769afc82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_22eb23391676f51fd6296e46769afc82 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_22eb23391676f51fd6296e46769afc82)) {
        Py_XDECREF(cache_frame_22eb23391676f51fd6296e46769afc82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22eb23391676f51fd6296e46769afc82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22eb23391676f51fd6296e46769afc82 = MAKE_FUNCTION_FRAME(codeobj_22eb23391676f51fd6296e46769afc82, module_insert, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_22eb23391676f51fd6296e46769afc82->m_type_description == NULL);
    frame_22eb23391676f51fd6296e46769afc82 = cache_frame_22eb23391676f51fd6296e46769afc82;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_22eb23391676f51fd6296e46769afc82);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_22eb23391676f51fd6296e46769afc82) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_n);
        tmp_compexpr_left_1 = par_n;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_name_1 = par_n;
        frame_22eb23391676f51fd6296e46769afc82->m_frame.f_lineno = 7;
        tmp_compexpr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_name_2 = par_n;
        frame_22eb23391676f51fd6296e46769afc82->m_frame.f_lineno = 8;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_22eb23391676f51fd6296e46769afc82);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_22eb23391676f51fd6296e46769afc82);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_22eb23391676f51fd6296e46769afc82);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_22eb23391676f51fd6296e46769afc82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22eb23391676f51fd6296e46769afc82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22eb23391676f51fd6296e46769afc82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22eb23391676f51fd6296e46769afc82,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_22eb23391676f51fd6296e46769afc82 == cache_frame_22eb23391676f51fd6296e46769afc82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_22eb23391676f51fd6296e46769afc82);
        cache_frame_22eb23391676f51fd6296e46769afc82 = NULL;
    }

    assertFrameObject(frame_22eb23391676f51fd6296e46769afc82);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_n);
    tmp_return_value = par_n;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    par_n = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    par_n = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_insert$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_language = python_pars[1];
    PyObject *par_parent = python_pars[2];
    PyObject *var_buttonBox = NULL;
    PyObject *var_layout = NULL;
    struct Nuitka_FrameObject *frame_e37aeb3a37a6b9c88a13edb4e5a0c875;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875)) {
        Py_XDECREF(cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875 = MAKE_FUNCTION_FRAME(codeobj_e37aeb3a37a6b9c88a13edb4e5a0c875, module_insert, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_type_description == NULL);
    frame_e37aeb3a37a6b9c88a13edb4e5a0c875 = cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e37aeb3a37a6b9c88a13edb4e5a0c875);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e37aeb3a37a6b9c88a13edb4e5a0c875) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 15;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_name_1 = par_parent;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 15;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 18;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 18;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[5]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 18;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 18;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_language);
        tmp_compexpr_left_1 = par_language;
        tmp_compexpr_right_1 = mod_consts[6];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 21;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 22;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[8], &PyTuple_GET_ITEM(mod_consts[9], 0));

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 24;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[8], &PyTuple_GET_ITEM(mod_consts[10], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 27;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 27;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[11], &PyTuple_GET_ITEM(mod_consts[12], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 30;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 31;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[16], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_assattr_target_3;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 32;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[17], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_assattr_target_4;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 33;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[18], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_assattr_target_5;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 34;
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[19], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[19]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 35;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[20], &PyTuple_GET_ITEM(mod_consts[21], 0));

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[23]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[24]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_buttonBox == NULL);
        var_buttonBox = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = par_self;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 40;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_10);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_language);
        tmp_compexpr_left_2 = par_language;
        tmp_compexpr_right_2 = mod_consts[6];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 41;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(var_layout);
        tmp_expression_name_5 = var_layout;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[26]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = mod_consts[27];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[14]);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 42;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_8;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_layout;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[26]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = mod_consts[29];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[16]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 43;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_expression_name_10;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_layout;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[26]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = mod_consts[30];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[17]);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 44;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_12;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = var_layout;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[26]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_17 = mod_consts[31];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[18]);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 45;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_13, call_args);
        }

        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_14;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = var_layout;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[26]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = mod_consts[32];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_self;
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[19]);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 46;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_14, call_args);
        }

        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_expression_name_16;
        CHECK_OBJECT(var_layout);
        tmp_expression_name_15 = var_layout;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[26]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_21 = mod_consts[33];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_16 = par_self;
        tmp_args_element_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[14]);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 48;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_22};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_expression_name_18;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = var_layout;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[26]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_23 = mod_consts[34];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_18 = par_self;
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[16]);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 49;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_16, call_args);
        }

        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_expression_name_20;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = var_layout;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[26]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_25 = mod_consts[35];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_20 = par_self;
        tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[17]);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 50;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_17, call_args);
        }

        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_expression_name_22;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_21 = var_layout;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[26]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_27 = mod_consts[36];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_22 = par_self;
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[18]);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 51;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_18, call_args);
        }

        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_expression_name_24;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_23 = var_layout;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[26]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_29 = mod_consts[37];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_24 = par_self;
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[19]);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_name_29, tmp_args_element_name_30};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_19, call_args);
        }

        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_end_2:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_31;
        if (var_layout == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_layout;
        CHECK_OBJECT(var_buttonBox);
        tmp_args_element_name_31 = var_buttonBox;
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 53;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[38], tmp_args_element_name_31);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_expression_name_27;
        if (var_buttonBox == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_26 = var_buttonBox;
        tmp_expression_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[40]);
        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[41]);
        Py_DECREF(tmp_expression_name_25);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_27 = par_self;
        tmp_args_element_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[42]);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 56;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_expression_name_30;
        if (var_buttonBox == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_29 = var_buttonBox;
        tmp_expression_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[43]);
        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[41]);
        Py_DECREF(tmp_expression_name_28);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_30 = par_self;
        tmp_args_element_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[44]);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 57;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame.f_lineno = 57;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e37aeb3a37a6b9c88a13edb4e5a0c875);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e37aeb3a37a6b9c88a13edb4e5a0c875);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e37aeb3a37a6b9c88a13edb4e5a0c875, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e37aeb3a37a6b9c88a13edb4e5a0c875->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e37aeb3a37a6b9c88a13edb4e5a0c875, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e37aeb3a37a6b9c88a13edb4e5a0c875,
        type_description_1,
        par_self,
        par_language,
        par_parent,
        var_buttonBox,
        var_layout,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e37aeb3a37a6b9c88a13edb4e5a0c875 == cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875);
        cache_frame_e37aeb3a37a6b9c88a13edb4e5a0c875 = NULL;
    }

    assertFrameObject(frame_e37aeb3a37a6b9c88a13edb4e5a0c875);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_language);
    Py_DECREF(par_language);
    par_language = NULL;
    Py_XDECREF(par_parent);
    par_parent = NULL;
    Py_XDECREF(var_buttonBox);
    var_buttonBox = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_language);
    Py_DECREF(par_language);
    par_language = NULL;
    Py_XDECREF(par_parent);
    par_parent = NULL;
    Py_XDECREF(var_buttonBox);
    var_buttonBox = NULL;
    Py_XDECREF(var_layout);
    var_layout = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_insert$$$function__3_getInputs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_55afa8cc013a1ad6df54df3c59cc48ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55afa8cc013a1ad6df54df3c59cc48ba = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_55afa8cc013a1ad6df54df3c59cc48ba)) {
        Py_XDECREF(cache_frame_55afa8cc013a1ad6df54df3c59cc48ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55afa8cc013a1ad6df54df3c59cc48ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55afa8cc013a1ad6df54df3c59cc48ba = MAKE_FUNCTION_FRAME(codeobj_55afa8cc013a1ad6df54df3c59cc48ba, module_insert, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_55afa8cc013a1ad6df54df3c59cc48ba->m_type_description == NULL);
    frame_55afa8cc013a1ad6df54df3c59cc48ba = cache_frame_55afa8cc013a1ad6df54df3c59cc48ba;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_55afa8cc013a1ad6df54df3c59cc48ba);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_55afa8cc013a1ad6df54df3c59cc48ba) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 61;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[45]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(5);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_expression_name_3;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_expression_name_5;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[16]);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 61;
            tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[48]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 61;
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 61;
            tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 61;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[49], &PyTuple_GET_ITEM(mod_consts[50], 0));

            Py_DECREF(tmp_called_instance_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_name_3 == NULL)) {
                tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_name_4 == NULL)) {
                tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_3 = par_self;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_args_element_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[48]);
            Py_DECREF(tmp_called_instance_5);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_called_instance_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, mod_consts[49], &PyTuple_GET_ITEM(mod_consts[50], 0));

            Py_DECREF(tmp_called_instance_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_name_5 == NULL)) {
                tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_name_6 == NULL)) {
                tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[18]);
            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_args_element_name_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[48]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 62;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, mod_consts[49], &PyTuple_GET_ITEM(mod_consts[50], 0));

            Py_DECREF(tmp_called_instance_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_name_7 == NULL)) {
                tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_name_8 == NULL)) {
                tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_5 = par_self;
            tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[19]);
            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 63;
            tmp_args_element_name_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[48]);
            Py_DECREF(tmp_called_instance_9);
            if (tmp_args_element_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 63;
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 63;
            tmp_called_instance_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame.f_lineno = 63;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_8, mod_consts[49], &PyTuple_GET_ITEM(mod_consts[50], 0));

            Py_DECREF(tmp_called_instance_8);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_55afa8cc013a1ad6df54df3c59cc48ba);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_55afa8cc013a1ad6df54df3c59cc48ba);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_55afa8cc013a1ad6df54df3c59cc48ba);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55afa8cc013a1ad6df54df3c59cc48ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55afa8cc013a1ad6df54df3c59cc48ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55afa8cc013a1ad6df54df3c59cc48ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55afa8cc013a1ad6df54df3c59cc48ba,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_55afa8cc013a1ad6df54df3c59cc48ba == cache_frame_55afa8cc013a1ad6df54df3c59cc48ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_55afa8cc013a1ad6df54df3c59cc48ba);
        cache_frame_55afa8cc013a1ad6df54df3c59cc48ba = NULL;
    }

    assertFrameObject(frame_55afa8cc013a1ad6df54df3c59cc48ba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_insert$$$function__1_cast() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_insert$$$function__1_cast,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22eb23391676f51fd6296e46769afc82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_insert,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_insert$$$function__2___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_insert$$$function__2___init__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_e37aeb3a37a6b9c88a13edb4e5a0c875,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_insert,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_insert$$$function__3_getInputs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_insert$$$function__3_getInputs,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_55afa8cc013a1ad6df54df3c59cc48ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_insert,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_insert[] = {
    impl_insert$$$function__1_cast,
    impl_insert$$$function__2___init__,
    impl_insert$$$function__3_getInputs,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_insert;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_insert) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_insert[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_insert,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "insert";

// Internal entry point for module code.
PyObject *modulecode_insert(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_insert = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("insert: Skipping module init, already done.\n");
#endif

        return module_insert;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("insert: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("insert: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("insert: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initinsert\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_insert = MODULE_DICT(module_insert);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_insert,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_insert,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_insert,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_insert,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_insert,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_insert);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_insert, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_insert, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_insert, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_insert);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_insert, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_b560d87754ca3f8406d426bbe5d365c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_insert$$$class__1_Insert_Nutrition_13 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c78aa3c441d74e5ad40fae3be82c735e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_insert, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_insert, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b560d87754ca3f8406d426bbe5d365c1 = MAKE_MODULE_FRAME(codeobj_b560d87754ca3f8406d426bbe5d365c1, module_insert);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b560d87754ca3f8406d426bbe5d365c1);
    assert(Py_REFCNT(frame_b560d87754ca3f8406d426bbe5d365c1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[54], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[55], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_insert, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[57];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_insert;
        tmp_locals_arg_name_1 = (PyObject *)moduledict_insert;
        tmp_fromlist_name_1 = mod_consts[58];
        tmp_level_name_1 = mod_consts[59];
        frame_b560d87754ca3f8406d426bbe5d365c1->m_frame.f_lineno = 1;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_insert, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[60];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_insert;
        tmp_locals_arg_name_2 = (PyObject *)moduledict_insert;
        tmp_fromlist_name_2 = mod_consts[58];
        tmp_level_name_2 = mod_consts[59];
        frame_b560d87754ca3f8406d426bbe5d365c1->m_frame.f_lineno = 2;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_insert, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_insert$$$function__1_cast();

        UPDATE_STRING_DICT1(moduledict_insert, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_insert, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_assign_source_5 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_5, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___main__$$$function__16__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[62];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[59];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_8 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[63]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[63]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[64];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_b560d87754ca3f8406d426bbe5d365c1->m_frame.f_lineno = 13;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[65]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[66];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[67];
        tmp_getattr_default_1 = mod_consts[68];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[67]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 13;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_insert$$$class__1_Insert_Nutrition_13 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_insert$$$class__1_Insert_Nutrition_13, mod_consts[70], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_insert$$$class__1_Insert_Nutrition_13, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2)) {
            Py_XDECREF(cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2 = MAKE_FUNCTION_FRAME(codeobj_c78aa3c441d74e5ad40fae3be82c735e, module_insert, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2->m_type_description == NULL);
        frame_c78aa3c441d74e5ad40fae3be82c735e_2 = cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c78aa3c441d74e5ad40fae3be82c735e_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c78aa3c441d74e5ad40fae3be82c735e_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[72];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_insert$$$function__2___init__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_insert$$$class__1_Insert_Nutrition_13, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_insert$$$function__3_getInputs();

        tmp_res = PyObject_SetItem(locals_insert$$$class__1_Insert_Nutrition_13, mod_consts[74], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c78aa3c441d74e5ad40fae3be82c735e_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c78aa3c441d74e5ad40fae3be82c735e_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c78aa3c441d74e5ad40fae3be82c735e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c78aa3c441d74e5ad40fae3be82c735e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c78aa3c441d74e5ad40fae3be82c735e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c78aa3c441d74e5ad40fae3be82c735e_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c78aa3c441d74e5ad40fae3be82c735e_2 == cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2);
            cache_frame_c78aa3c441d74e5ad40fae3be82c735e_2 = NULL;
        }

        assertFrameObject(frame_c78aa3c441d74e5ad40fae3be82c735e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_insert$$$class__1_Insert_Nutrition_13, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[64];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_insert$$$class__1_Insert_Nutrition_13;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_b560d87754ca3f8406d426bbe5d365c1->m_frame.f_lineno = 13;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto try_except_handler_3;
            }
            {
                PyObject *old = Nuitka_Cell_GET(outline_0_var___class__);
                PyCell_SET(outline_0_var___class__, tmp_assign_source_12);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_11 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_insert$$$class__1_Insert_Nutrition_13);
        locals_insert$$$class__1_Insert_Nutrition_13 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_insert$$$class__1_Insert_Nutrition_13);
        locals_insert$$$class__1_Insert_Nutrition_13 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 13;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_insert, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b560d87754ca3f8406d426bbe5d365c1);
#endif
    popFrameStack();

    assertFrameObject(frame_b560d87754ca3f8406d426bbe5d365c1);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b560d87754ca3f8406d426bbe5d365c1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b560d87754ca3f8406d426bbe5d365c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b560d87754ca3f8406d426bbe5d365c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b560d87754ca3f8406d426bbe5d365c1, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    return module_insert;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

